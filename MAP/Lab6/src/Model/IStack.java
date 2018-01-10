package Model;

public interface IStack<T>
{
    void push(T el);
    T pop();
    boolean isEmpty();
    Iterable<T> getAll();
}