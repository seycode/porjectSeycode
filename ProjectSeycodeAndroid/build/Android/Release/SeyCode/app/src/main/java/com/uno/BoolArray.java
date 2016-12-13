package com.uno;
import com.uno.UnoObject;

public class BoolArray extends UnoObject
{
    public BoolArray(long ptr) {
        super(ptr);
    }

    public boolean get(int index) {
        return com.Bindings.ExternedBlockHost.getBool(this, index);
    }

    public boolean set(int index, boolean val) {
        return com.Bindings.ExternedBlockHost.setBool(this, index, val);
    }

    public boolean[] copyArray()
    {
        return (boolean[])com.Bindings.ExternedBlockHost.copyBoolArray(this);
    }
}
