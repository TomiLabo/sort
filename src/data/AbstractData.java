package data;

public abstract class AbstractData<T> implements Randomable {
    protected T raw;
    
    public AbstractData(final T raw) {
        this.raw = raw;
    }
    
    public T get() {
        return raw;
    }
    
    public void set(final T raw) {
        this.raw = raw;
    }
   
    public abstract void show();
    
    public abstract boolean isOrder(T data);
}
