package Model;

public interface IList<T> {
    public void add(T x);
    public Iterable<T> getAll();
}
