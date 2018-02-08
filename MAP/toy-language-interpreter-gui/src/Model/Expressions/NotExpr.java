package Model.Expressions;


import Model.Exceptions.AddressNotDefinedException;
import Model.Exceptions.DivisionByZeroException;
import Model.Exceptions.UnknownOperationException;
import Model.Exceptions.VariableNotDefinedException;
import Model.States.IHeap;
import Model.States.ISymTable;

public class NotExpr implements IExpr {

    private IExpr exp;

    public NotExpr(IExpr exp) {
        this.exp = exp;
    }

    @Override
    public int eval(ISymTable<String, Integer> symTable, IHeap<Integer, Integer> heap) throws DivisionByZeroException, UnknownOperationException, VariableNotDefinedException, AddressNotDefinedException {
        int x = this.exp.eval(symTable, heap);
        if (x == 0) {
            return 1;
        }
        return 0;
    }

    @Override
    public String toString() {
        return "!(" + this.exp.toString() + ")";
    }
}
