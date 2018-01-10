package Model.Statement;

import Model.File.*;
import Model.*;


public class PrgState
{
    private IExecStack<Statement> execStack;
    private IDictionary<String,Integer> symbolT;
    private IList<Integer> list;
    private Statement statement;
    private FileData fd;
    private FileTable<Integer,FileData> ft;
    public PrgState(IExecStack<Statement> s, IDictionary<String, Integer> d, IList<Integer> l, Statement st, FileTable<Integer, FileData> ftable)
    {
        execStack = s;
        symbolT = d;
        list = l;
        statement = st;
        ft = ftable;
    }

    public IExecStack<Statement> getExecStack()
    {
        return execStack;
    }

    public IDictionary<String, Integer> getSymbolT()
    {
        return symbolT;
    }

    public IList<Integer> getList()
    {
        return list;
    }

    public Statement getStatement() { return statement; }

    public void setExecStack(IExecStack<Statement> execStack)
    {
        this.execStack = execStack;
    }

    public void setSymbolT(IDictionary<String, Integer> symbolT)
    {
        this.symbolT = symbolT;
    }

    public void setList(IList<Integer> l)
    {
        this.list = l;
    }

    public FileTable<Integer, FileData> getFileTable() { return ft; }

    public void setFileTable(FileTable<Integer, FileData> flt) { ft = flt; }

    public void setStatement(Statement sta) { this.statement = sta; }

    @Override
    public String toString()
    {
        StringBuffer buff = new StringBuffer();
        buff.append(execStack);
        buff.append(symbolT);
        buff.append(list);
        buff.append(statement);
        buff.append("\n");
        return buff.toString();
    }
}