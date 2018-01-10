package Repository;
import Model.Statement.PrgState;

import java.util.List;

public interface IPrgStateRepo
{
    void addPrgState(PrgState st);
    PrgState getCurrentProgram();
    void logPrgStateExec(PrgState prgState);
    void dateLogPrgStateExec();
    List<PrgState> getPrgList();
    void setPrgList(List<PrgState> list);
}
