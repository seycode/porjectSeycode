package com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class JavaToUnoArrayEntrypoints
{
    static void debug_log(Object message)
    {
        android.util.Log.d("SeyCode", (message==null ? "null" : message.toString()));
    }

    public static Object copyBoolArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray0(array);
    }
    
    public static Object copyByteArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray1(array);
    }
    
    public static Object copyCharArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray2(array);
    }
    
    public static Object copyDoubleArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray3(array);
    }
    
    public static Object copyFloatArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray4(array);
    }
    
    public static Object copyIntArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray5(array);
    }
    
    public static Object copyLongArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray6(array);
    }
    
    public static Object copyObjectArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray7(array);
    }
    
    public static Object copyShortArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray8(array);
    }
    
    public static Object copyStringArray(final Object array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray9(array);
    }
    
    public static boolean getBool(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool10(array,index);
    }
    
    public static byte getByte(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte11(array,index);
    }
    
    public static char getChar(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar12(array,index);
    }
    
    public static double getDouble(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble13(array,index);
    }
    
    public static float getFloat(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat14(array,index);
    }
    
    public static int getInt(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt15(array,index);
    }
    
    public static long getLong(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong16(array,index);
    }
    
    public static Object getObject(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject17(array,index);
    }
    
    public static short getShort(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort18(array,index);
    }
    
    public static String getString(final Object array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString19(array,index);
    }
    
    public static boolean setBool(final Object array,final int index,final boolean val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool20(array,index,val);
    }
    
    public static byte setByte(final Object array,final int index,final byte val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte21(array,index,val);
    }
    
    public static char setChar(final Object array,final int index,final char val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar22(array,index,val);
    }
    
    public static double setDouble(final Object array,final int index,final double val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble23(array,index,val);
    }
    
    public static float setFloat(final Object array,final int index,final float val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat24(array,index,val);
    }
    
    public static int setInt(final Object array,final int index,final int val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt25(array,index,val);
    }
    
    public static long setLong(final Object array,final int index,final long val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong26(array,index,val);
    }
    
    public static Object setObject(final Object array,final int index,final Object val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject27(array,index,val);
    }
    
    public static short setShort(final Object array,final int index,final short val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort28(array,index,val);
    }
    
    public static String setString(final Object array,final int index,final String val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString29(array,index,val);
    }
    
}
