package com.uno;
import com.uno.UnoObject;

public class ObjectArray extends UnoObject
{
    public ObjectArray(long ptr) {
        super(ptr);
    }

    public UnoObject get(int index) {
        return (UnoObject)com.Bindings.ExternedBlockHost.getObject(this, index);
    }

    public UnoObject set(int index, UnoObject val) {
        return (UnoObject)com.Bindings.ExternedBlockHost.setObject(this, index, val);
    }

    public UnoObject[] copyArray()
    {
        return (UnoObject[])com.Bindings.ExternedBlockHost.copyObjectArray(this);
    }
}
