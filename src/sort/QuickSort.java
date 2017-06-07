package sort;

import java.util.ArrayList;

import data.Data;

public class QuickSort<T> extends Sorter<Data, T> {

    @Override
    public Data sort(Data data) {
        ArrayList<T> list = data.getData();
        return data.forceUpdateData(list);
    }
    
}
