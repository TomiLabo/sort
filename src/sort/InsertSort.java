package sort;

import java.util.function.BiFunction;
import java.util.function.Function;

import data.AbstractData;
import data.DataList;
import data.NumData;

public class InsertSort<T> extends Sort<T> {

    @Override
    public void sort(DataList<T> datas, BiFunction<T,T,Boolean> compare) {
        for (int i = 1; i < datas.size(); i++) {
            for (int j = i; j >= 1 && compare.apply(datas.get(j), datas.get(j - 1)); j--) {
                datas.swap(j, j - 1);
            }
        }
    }
}
