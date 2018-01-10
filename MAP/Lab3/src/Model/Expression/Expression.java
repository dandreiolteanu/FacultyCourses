package Model.Expression;

import Exception.DivByZeroException;
import Exception.EvaluationException;
import Model.IDictionary;
import Exception.InexistentSymbolException;

public interface Expression
{
    public int Eval(IDictionary<String, Integer> d) throws EvaluationException, DivByZeroException, InexistentSymbolException;
}
