package com.uno;
import com.uno.UnoObject;

public class LongArray extends UnoObject
{
    public LongArray(long ptr) {
        super(ptr);
    }

    public long get(int index) {
        return com.Bindings.ExternedBlockHost.getLong(this, index);
    }

    public long set(int index, long val) {
        return com.Bindings.ExternedBlockHost.setLong(this, index, val);
    }

    public long[] copyArray()
    {
        return (long[])com.Bindings.ExternedBlockHost.copyLongArray(this);
    }
}
