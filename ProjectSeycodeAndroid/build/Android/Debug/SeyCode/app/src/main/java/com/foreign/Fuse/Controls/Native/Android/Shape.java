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

public class Shape
{
    static void debug_log(Object message)
    {
        android.util.Log.d("SeyCode", (message==null ? "null" : message.toString()));
    }

    public static Object Create85()
    {
        return new android.view.View(com.apps.seycode.SeyCode.GetRootActivity());
    }
    
    public static Object CreateShapeDrawable86()
    {
        return new android.graphics.drawable.ShapeDrawable();
    }
    
    public static Object GetLayer87(final Object handle,final int layer)
    {
        android.graphics.drawable.LayerDrawable layerDrawable = (android.graphics.drawable.LayerDrawable)handle;
        return layerDrawable.getDrawable(layer);
    }
    
    public static Object MakeLayerDrawable88(final Object handle,final int layerCount)
    {
        android.view.View view = (android.view.View)handle;
        android.graphics.drawable.Drawable[] drawables = new android.graphics.drawable.Drawable[layerCount];
        
        for (int i = 0; i < layerCount; i++)
        {
        	drawables[i] = new android.graphics.drawable.ShapeDrawable();
        }
        
        android.graphics.drawable.LayerDrawable layerDrawable = new android.graphics.drawable.LayerDrawable(drawables);
        
        if (android.os.Build.VERSION.SDK_INT >= 17)
        {
        	view.setBackground(layerDrawable);
        }
        else
        {
        	view.setBackgroundDrawable(layerDrawable);
        }
        
        return layerDrawable;
    }
    
    public static void SetShapeDrawableColor89(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)shapeDrawable;
        sd.getPaint().setARGB(a, r, g, b);
        sd.setAlpha(opacity);
    }
    
    public static void SetShapeDrawableStrokeWidth90(final Object shapeDrawable,final float width)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)shapeDrawable;
        sd.getPaint().setStyle(android.graphics.Paint.Style.STROKE);
        sd.getPaint().setStrokeWidth(width);
    }
    
}
