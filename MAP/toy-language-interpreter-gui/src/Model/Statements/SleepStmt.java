package Model.Statements;

import Model.Exceptions.DivisionByZeroException;
import Model.Exceptions.UnknownOperationException;
import Model.States.PrgState;

import java.io.IOException;

public class SleepStmt implements IStmt {

    private int time;

    public SleepStmt(int sleepTime) {
        this.time = sleepTime;
    }

    @Override
    public PrgState execute(PrgState currentState) throws DivisionByZeroException, UnknownOperationException, IOException {

        if (this.time > 0) {
            currentState.getExecStack().push(new SleepStmt(this.time - 1));
        }
        return null;
    }

    public int getTime() {
        return time;
    }

    @Override
    public String toString() {
        return "sleep(" + getTime() + ")";
    }
}
