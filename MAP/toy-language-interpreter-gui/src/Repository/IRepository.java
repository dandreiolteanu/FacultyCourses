package Repository;

import Model.States.PrgState;

import java.io.IOException;
import java.util.List;

public interface IRepository {
    List<PrgState> getPrgList();
    void setPrgList(List<PrgState> newPrgList);
    void logPrgStateExec(PrgState prgState) throws IOException;
    void openLogFile() throws IOException;
    PrgState getById(int id);
    public void serializeToFile(String fileName);
    public void deserializeFromFile(String fileName);
}
