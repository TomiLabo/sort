package entrypoint;

import data.DataList;
import data.NumData;
import debuggers.NumDataListDebugger;
import generator.NumRandomGenerator;
import sort.InsertSort;

public class Main {
    public static void main(String[] args) {
        NumRandomGenerator g = new NumRandomGenerator();
        NumData[] tmpDatas = g.generateDataList(10);
        DataList<NumData> datas = new DataList<NumData>(tmpDatas);
        InsertSort<NumData> sorter = new InsertSort<NumData>();
        sorter.sort(datas, (left, right) -> left.isOrder(right.get()));
        NumDataListDebugger debugger = new NumDataListDebugger();
        debugger.showDataList(datas);
    }
}
