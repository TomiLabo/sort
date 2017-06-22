package entrypoint;

import data.DataList;
import data.NumData;
import debuggers.NumDataListDebugger;
import generator.NumRandomGenerator;
import sort.InsertSort;

public class Main {
    public static void main(String[] args) {
        NumRandomGenerator g = new NumRandomGenerator();
        NumData[] tmpDataList = g.generateDataList(10);
        DataList<NumData> dataList = new DataList<NumData>(tmpDataList);
        InsertSort<NumData> sorter = new InsertSort<NumData>();
        sorter.sort(dataList, (left, right) -> left.isOrder(right.get()));
        NumDataListDebugger debugger = new NumDataListDebugger();
        debugger.showDataList(dataList);
    }
}
