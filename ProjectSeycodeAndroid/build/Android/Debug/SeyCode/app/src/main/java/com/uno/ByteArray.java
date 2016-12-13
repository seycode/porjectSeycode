package com.uno;
import com.uno.UnoObject;

public class ByteArray extends UnoObject
{
    public ByteArray(long ptr) {
        super(ptr);
    }

    public byte get(int index) {
        return com.Bindings.ExternedBlockHost.getByte(this, index);
    }

    public byte set(int index, byte val) {
        return com.Bindings.ExternedBlockHost.setByte(this, index, val);
    }

    public byte[] copyArray()
    {
        return (byte[])com.Bindings.ExternedBlockHost.copyByteArray(this);
    }
}
