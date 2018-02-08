package Model.Statements;

import Model.Exceptions.DivisionByZeroException;
import Model.Exceptions.UnknownOperationException;
import Model.Expressions.IExpr;
import Model.Expressions.NotExpr;
import Model.States.PrgState;

import java.io.IOException;

public class RepeatStmt implements IStmt {

    private IStmt stmt;
    private IExpr expr;

    public RepeatStmt(IStmt stmt, IExpr expr) {
        this.stmt = stmt;
        this.expr = expr;
    }

    @Override
    public PrgState execute(PrgState currentState) throws DivisionByZeroException, UnknownOperationException, IOException {
        IStmt s = new CompStmt(this.stmt, new WhileStmt(new NotExpr(this.expr), stmt));
        currentState.getExecStack().push(s);
        return null;
    }

    @Override
    public String toString() {
        return "repeat " + this.stmt.toString() + " until " + this.expr.toString();
    }
}
