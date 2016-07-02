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

public class DrawableViewGroup
{
    static void debug_log(Object message)
    {
        android.util.Log.d("UniEconomy", (message==null ? "null" : message.toString()));
    }

    public static void AddView34(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView);
    }
    
    public static void AddView135(final Object parentHandle,final Object childHandle,final int index)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.addView(childView, index);
    }
    
    public static Object Create36()
    {
        android.widget.RelativeLayout relativeLayout = new android.widget.RelativeLayout(Fuse.Preview.UniEconomy.GetRootActivity());
        relativeLayout.setFocusable(true);
        relativeLayout.setFocusableInTouchMode(true);
        relativeLayout.setClipToPadding(false);
        relativeLayout.setClipChildren(false);
        relativeLayout.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        return relativeLayout;
    }
    
    public static void HideOffscreenParent37(final Object handle)
    {
        android.view.View view = (android.view.View)handle;
        view.setTranslationX(java.lang.Integer.MAX_VALUE / 2);
        view.setTranslationY(java.lang.Integer.MAX_VALUE / 2);
    }
    
    public static void RemoveView38(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        android.view.View childView = (android.view.View)childHandle;
        viewGroup.removeView(childView);	
    }
    
    public static void SetChildSize39(final Object handle,final int w,final int h)
    {
        ((android.view.View)handle).setLayoutParams(new android.widget.RelativeLayout.LayoutParams(w, h));
        ((android.view.View)handle).invalidate();
    }
    
}
