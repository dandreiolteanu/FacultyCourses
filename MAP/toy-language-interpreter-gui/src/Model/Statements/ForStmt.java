package Model.Statements;

import Model.Exceptions.DivisionByZeroException;
import Model.Exceptions.UnknownOperationException;
import Model.Expressions.IExpr;
import Model.States.PrgState;

import java.io.IOException;

public class ForStmt implements IStmt {

    private IStmt stmt1, stmt2, stmt3;
    private IExpr expr;

    public ForStmt(IStmt s1, IExpr e, IStmt s2, IStmt s3) {

        this.stmt1 = s1;
        this.expr = e;
        this.stmt2 = s2;
        this.stmt3 = s3;
    }



    @Override
    public PrgState execute(PrgState currentState) throws DivisionByZeroException, UnknownOperationException, IOException {
        IStmt statement = new CompStmt(stmt1, new WhileStmt(expr, new CompStmt(stmt3, stmt2)));
        currentState.getExecStack().push(statement);
        return null;
    }

    @Override
    public String toString() {
        StringBuffer buff = new StringBuffer();
        buff.append("for(");
        buff.append(stmt1 + ", ");
        buff.append(expr + ", ");
        buff.append(stmt2 + ")");
        buff.append("{ " + stmt3 + " }");

        return buff.toString();
    }
}
