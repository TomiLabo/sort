package sort;

import java.util.function.BiFunction;
import java.util.function.Function;

import data.DataList;

public abstract class Sort<T> {

    public abstract void sort(DataList<T> datas, BiFunction<T,T,Boolean> compare);
}
