package data;

import java.util.ArrayList;

public abstract class Data<T> extends Comparator<T>{
    public ArrayList<T> dataList;

    public Data(ArrayList<T> dataList) {
        this.dataList = dataList;
    }
    
    public abstract Data forceUpdateData(ArrayList<T> list);

    public abstract boolean compare(T data);
    
    public abstract boolean isSorted();
    
    public abstract ArrayList<T> getData();
    
    public abstract void swap(int leftIndex, int rightIndex);
}
