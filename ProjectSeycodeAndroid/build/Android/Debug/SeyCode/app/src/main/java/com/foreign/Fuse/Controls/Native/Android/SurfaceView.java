package com.foreign.Fuse.Controls.Native.Android;

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

public class SurfaceView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("SeyCode", (message==null ? "null" : message.toString()));
    }

    public static void AddCallback97(final Object _this, final Object handle)
    {
        ((android.view.SurfaceView)handle).getHolder().addCallback(new android.view.SurfaceHolder.Callback2() {
        	public void surfaceRedrawNeeded(android.view.SurfaceHolder holder) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded98(_this,holder,UnoHelper.GetUnoObjectRef(holder));
        	}
        	public void surfaceChanged(android.view.SurfaceHolder holder, int format, int width, int height) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged99(_this,holder,format,width,height,UnoHelper.GetUnoObjectRef(holder));
        	}
        	public void surfaceCreated(android.view.SurfaceHolder holder) { 
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated100(_this,holder,UnoHelper.GetUnoObjectRef(holder));
        	}
        	public void surfaceDestroyed(android.view.SurfaceHolder holder) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed101(_this,holder,UnoHelper.GetUnoObjectRef(holder));
        	}
        });
    }
    
    public static Object Create102()
    {
        return new android.view.SurfaceView(com.apps.seycode.SeyCode.GetRootActivity());
    }
    
    public static Object GetSurface103(final Object holder)
    {
        return ((android.view.SurfaceHolder)holder).getSurface();
    }
    
}
