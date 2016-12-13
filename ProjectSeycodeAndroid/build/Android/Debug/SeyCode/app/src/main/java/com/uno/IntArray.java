package com.uno;
import com.uno.UnoObject;

public class IntArray extends UnoObject
{
    public IntArray(long ptr) {
        super(ptr);
    }

    public int get(int index) {
        return com.Bindings.ExternedBlockHost.getInt(this, index);
    }

    public int set(int index, int val) {
        return com.Bindings.ExternedBlockHost.setInt(this, index, val);
    }

    public int[] copyArray()
    {
        return (int[])com.Bindings.ExternedBlockHost.copyIntArray(this);
    }
}
