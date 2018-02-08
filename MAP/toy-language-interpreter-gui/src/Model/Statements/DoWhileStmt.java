package Model.Statements;

import Model.Exceptions.DivisionByZeroException;
import Model.Exceptions.UnknownOperationException;
import Model.Expressions.BoolExpr;
import Model.Expressions.IExpr;
import Model.States.PrgState;

import java.io.IOException;

public class DoWhileStmt implements IStmt {

    private IStmt stmt;
    private IExpr expr;

    public DoWhileStmt(IStmt stmt, IExpr expr) {
        this.stmt = stmt;
        this.expr = expr;
    }

    @Override
    public PrgState execute(PrgState currentState) throws DivisionByZeroException, UnknownOperationException, IOException {
        IStmt s = new CompStmt(stmt, new WhileStmt( this.expr, stmt));
        currentState.getExecStack().push(s);
        return null;
    }

    @Override
    public String toString() {
        return "do " + this.stmt.toString() + " while " + this.expr.toString();
    }
}
