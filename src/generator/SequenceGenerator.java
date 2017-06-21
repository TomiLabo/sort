package generator;

import data.AbstractData;

public abstract class SequenceGenerator<T> {
    public abstract T[] generateDataList(int dataNum);

    public abstract T generateData();
}
