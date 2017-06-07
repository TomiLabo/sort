package data;

import java.util.ArrayList;

public final class NumData extends Data<Integer> {
    public NumData(ArrayList<Integer> dataList) {
        super(dataList);
    }
    
    @Override
    public boolean isOrder(Integer data) {
        return false;
    }

    @Override
    public boolean isSorted() {
        return false;
    }

    @Override
    public void swap(int leftIndex, int rightIndex) {
    }

    @Override
    public ArrayList<Integer> getData() {
        return this.dataList;
    }

    @Override
    public NumData forceUpdateData(ArrayList<Integer> list) {
        this.dataList = list;
        return this;
    }
}