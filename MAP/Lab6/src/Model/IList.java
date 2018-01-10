package Model;

public interface IList<T>
{
    void add(T x);
    Iterable<T> getAll();
}
