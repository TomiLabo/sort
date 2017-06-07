package generator;

import java.util.ArrayList;

import data.Data;
import data.NumData;

public class RandomNumGenerator extends SequenceGenerator<Integer> {
    @Override
    public Data generate() {
        ArrayList<Integer> data = new ArrayList<Integer>();
        for (int i = 0; i < 100; i++) {
            data.add((int)Math.random() * 100);
        }
        return new NumData(data);
    }
}
