package com.uno;
import com.uno.UnoObject;

public class ShortArray extends UnoObject
{
    public ShortArray(long ptr) {
        super(ptr);
    }

    public short get(int index) {
        return com.Bindings.ExternedBlockHost.getShort(this, index);
    }

    public short set(int index, short val) {
        return com.Bindings.ExternedBlockHost.setShort(this, index, val);
    }

    public short[] copyArray()
    {
        return (short[])com.Bindings.ExternedBlockHost.copyShortArray(this);
    }
}
