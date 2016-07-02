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

public class View
{
    static void debug_log(Object message)
    {
        android.util.Log.d("UniEconomy", (message==null ? "null" : message.toString()));
    }

    public static void BringToFront1134(final Object handle)
    {
        ((android.view.View)handle).bringToFront();
    }
    
    public static void SetEnabled135(final Object handle,final boolean value)
    {
        ((android.view.View)handle).setEnabled(value);	
    }
    
    public static void SetOpacity136(final Object handle,final float value)
    {
        ((android.view.View)handle).setAlpha(value);
    }
    
    public static void SetPivotXY137(final Object handle,final float x,final float y)
    {
        android.view.View view = (android.view.View)handle;
        view.setPivotX(x);
        view.setPivotY(y);
    }
    
    public static void SetRotation138(final Object handle,final float value)
    {
        ((android.view.View)handle).setRotation(value);
    }
    
    public static void SetScaleXY139(final Object handle,final float x,final float y)
    {
        android.view.View view = (android.view.View)handle;
        view.setScaleX(x);
        view.setScaleY(y);	
    }
    
    public static void SetTranslation140(final Object handle,final float x,final float y)
    {
        android.view.View view = (android.view.View)handle;
        view.setTranslationX(x);
        view.setTranslationY(y);
    }
    
    public static void SetVisible141(final Object handle,final boolean isVisible)
    {
        ((android.view.View)handle).setVisibility( (isVisible) ? 0x0 : 0x4 );
    }
    
}
