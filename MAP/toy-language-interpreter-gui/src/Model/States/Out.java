package Model.States;

import java.util.ArrayList;
import java.util.List;

public class Out<T> implements IOut<T> {
    private List<T> list;

    public Out() {
        this.list = new ArrayList<T>();
    }

    @Override
    public T getLast() {
        return this.list.get(this.list.size() - 1);
    }

    @Override
    public void append(T elem) {
        this.list.add(elem);
    }

    @Override
    public void remove(int index) {
        this.list.remove(index);
    }

    @Override
    public void update(int index, T elem) {
        this.list.add(index, elem);
    }

    @Override
    public boolean isEmpy() {
        return this.list.size() == 0;
    }

    @Override
    public List<T> getContent() {
        return this.list;
    }

    @Override
    public String toString() {
        StringBuilder comp = new StringBuilder();
        for(T el: this.list) {
            comp.append(String.valueOf(el));
            comp.append("\r\n");
        }
        return comp.toString();
    }
}
