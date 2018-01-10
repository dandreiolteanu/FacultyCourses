package Repository;

import Model.Statement.*;
import Model.*;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class PrgStateRepo implements IPrgStateRepo
{
    private List<PrgState> myList = new ArrayList<>();
    public void addPrgState(PrgState st)
    {
        myList.add(st);
    }
    public PrgState getCurrentProgram()
    {
        return myList.get(0);
    }

    private String fileName;
    public PrgStateRepo(PrgState program, String fName) {
        fileName = fName;
        myList.add(program);
    }

    public void logDateProgStateExec() {
        try (PrintWriter log = new PrintWriter(new BufferedWriter(new FileWriter(fileName, true)))) {

            Date date = new Date();
            log.println();
            log.println("--------------------------------------------------------");
            log.println("Andrei Olteanu");
            log.println(date);
            log.println("--------------------------------------------------------");
            log.println();

        } catch(IOException ex) {
            System.out.println(ex.getMessage());
        }
    }

    public void logPrgStateExec() {
        PrgState state = getCurrentProgram();
        try (PrintWriter log = new PrintWriter(new BufferedWriter(new FileWriter(fileName, true)))) {
            log.println("ExeStack:");
            for(Statement st: state.getExecStack().getAll())
                log.println(st);

            log.println("Symbol table: ");
            IDictionary<String, Integer> dict = state.getSymbolT();
            for(String key: dict.getAll())
                log.println(key + "->" + dict.get(key));
            log.println("Output list: ");
            for(int v : state.getList().getAll())
                log.println(v);
        }
        catch(IOException ex) {
            System.out.println(ex.getMessage());
        }
    }
}
