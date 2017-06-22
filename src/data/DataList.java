package data;

import java.util.ArrayList;
import java.util.Collections;

public class DataList<T> {
    private ArrayList<T> raw;

    public DataList(T[] dataList) {
        this.raw = new ArrayList<T>();
        for (T data: dataList) {
            this.raw.add(data);
        }
    }
    
    public void swap(int left, int right) {
        Collections.swap(raw, left, right);
    }
    
    public T get(int index) {
        return raw.get(index);
    }
    
    public int size() {
        return raw.size();
    }
    
    public void add(T data) {
        this.raw.add(data);
    }
}
