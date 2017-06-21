package debuggers;

import data.AbstractData;
import data.DataList;

public abstract class Debugger<T> {
    public abstract void showDataList(DataList<T> datas);
}
