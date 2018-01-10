package Controller;
import Repository.*;
import Model.*;
import Model.Statement.*;

public class Controller
{
    private IPrgStateRepo ipsr;
    public Controller(IPrgStateRepo ip)
    {
        ipsr = ip;
    }
    public void executeOneStep()
    {
        PrgState ps = ipsr.getCurrentProgram();
        IExecStack<Statement> ex = ps.getExecStack();
        if(! ex.isEmpty())
        {
            Statement instr = ex.pop();
            instr.execute(ps);
            System.out.println(ps);

        }
        System.out.println("----------------------------------------------");
    }
    public void executeAll()
    {
        PrgState ps = ipsr.getCurrentProgram();
        IExecStack<Statement> es = ps.getExecStack();

        ipsr.logDateProgStateExec();
        while(! es.isEmpty())
        {
            executeOneStep();
            ipsr.logPrgStateExec();
        }
        System.out.println("----------------------------------------------");
    }

    public void add(PrgState prgState){
        ipsr.addPrgState(prgState);
    }
}