package generator;

import data.AbstractData;
import data.DataTypes;
import data.NumData;

public class NumRandomGenerator extends SequenceGenerator<NumData> {
    public NumData[] generateDataList(int dataCount) {
        NumData[] datas = new NumData[dataCount];
        for (int i = 0; i < dataCount; i++) {
            datas[i] = new NumData();
        }
        return datas;
    }

    @Override
    public NumData generateData() {
        return new NumData();
    }
}
