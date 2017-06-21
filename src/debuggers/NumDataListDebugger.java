package debuggers;

import data.DataList;
import data.NumData;

public class NumDataListDebugger extends Debugger<NumData> {

    @Override
    public void showDataList(DataList<NumData> datas) {
        for (int i = 0; i < datas.size(); i++) {
            datas.get(i).show();
        }
        System.out.println("");
    }
    
}
