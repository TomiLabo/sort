package data;

import java.util.Random;

public class NumData extends AbstractData<Integer> {
    private final Random randFunc = new Random();
    private final int MAX_VALUE;

    public NumData() {
        super(0);
        this.MAX_VALUE = 100000;
        this.randomize();
    }
    
    public NumData(Integer raw) {
        super(raw);
        this.MAX_VALUE = 100000;
    }

    public NumData(Integer raw, int max) {
        super(raw);
        this.MAX_VALUE = max;
    }
   
    public void show() {
        System.out.print(this.raw.toString() + " | ");
    }

    @Override
    public boolean isOrder(Integer target) {
        return this.raw < target;
    }

    @Override
    public void randomize() {
        this.raw = randFunc.nextInt(MAX_VALUE);
    }
}
