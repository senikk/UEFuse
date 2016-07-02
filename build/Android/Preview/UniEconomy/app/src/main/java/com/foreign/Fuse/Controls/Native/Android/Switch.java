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

public class Switch
{
    static void debug_log(Object message)
    {
        android.util.Log.d("UniEconomy", (message==null ? "null" : message.toString()));
    }

    public static void AddCallback96(final Object _this, final Object handle)
    {
        ((android.widget.Switch)handle).setOnCheckedChangeListener(new android.widget.CompoundButton.OnCheckedChangeListener() {
        	public void onCheckedChanged(android.widget.CompoundButton buttonView, boolean isChecked) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged97(_this,isChecked);
        	}
        });
    }
    
    public static Object Create98()
    {
        return new android.widget.Switch(Fuse.Preview.UniEconomy.GetRootActivity());
    }
    
    public static void SetValue99(final Object handle,final boolean value)
    {
        ((android.widget.Switch)handle).setChecked(value);
    }
    
}
