package com.uno;
import com.uno.UnoObject;

public class DoubleArray extends UnoObject
{
    public DoubleArray(long ptr) {
        super(ptr);
    }

    public double get(int index) {
        return com.Bindings.ExternedBlockHost.getDouble(this, index);
    }

    public double set(int index, double val) {
        return com.Bindings.ExternedBlockHost.setDouble(this, index, val);
    }

    public double[] copyArray()
    {
        return (double[])com.Bindings.ExternedBlockHost.copyDoubleArray(this);
    }
}
