package com.foreign.Fuse.Android;

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

public class StatusBarConfig
{
    static void debug_log(Object message)
    {
        android.util.Log.d("SeyCode", (message==null ? "null" : message.toString()));
    }

    public static void SetStatusBarColor1216(final int color)
    {
        android.view.Window window = com.apps.seycode.SeyCode.GetRootActivity().getWindow();
        if (Integer.valueOf(android.os.Build.VERSION.SDK) >= 21)
        {
        	window.setStatusBarColor(color);
        }
    }
    
    public static void SetStatusBarVisible217(final Object _this, final boolean visible)
    {
        android.view.Window window = com.apps.seycode.SeyCode.GetRootActivity().getWindow();
        
        if (!visible)
        {
        	window.setFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
        else
        {
        	window.clearFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
    }
    
}
