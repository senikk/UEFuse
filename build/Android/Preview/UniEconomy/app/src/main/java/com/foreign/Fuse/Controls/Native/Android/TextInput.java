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

public class TextInput
{
    static void debug_log(Object message)
    {
        android.util.Log.d("UniEconomy", (message==null ? "null" : message.toString()));
    }

    public static void AddEditorActionListener108(final Object _this, final Object handle)
    {
        ((android.widget.TextView)handle).setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
        	public boolean onEditorAction(android.widget.TextView v, int actionId, android.view.KeyEvent ke) { 
        		return ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction109(_this,actionId);
        	}
        });
    }
    
    public static void AddTextChangedListener110(final Object _this, final Object handle)
    {
        ((android.widget.TextView)handle).addTextChangedListener(new android.text.TextWatcher() {
        	public void afterTextChanged(android.text.Editable e) {
        
        	}
        	public void beforeTextChanged(java.lang.CharSequence cs, int start, int count, int after) {
        		
        	}
        	public void onTextChanged(java.lang.CharSequence cs, int start, int before, int count) {
        		java.lang.String str = cs.toString();
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged111(_this,str);
        	}
        });
    }
    
    public static void ClearFocus112(final Object handle)
    {
        android.widget.TextView t = (android.widget.TextView)handle;
        t.clearFocus();
    }
    
    public static Object Create1113()
    {
        return new android.widget.EditText(Fuse.Preview.UniEconomy.GetRootActivity());
    }
    
    public static boolean HasFocus114(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).hasFocus();
    }
    
    public static void RequestFocus115(final Object viewHandle)
    {
        ((android.view.View)viewHandle).requestFocus();	
    }
    
    public static void SetCursorDrawableColor116(final Object _this, final Object handle,final int color)
    {
        android.widget.EditText editText = (android.widget.EditText)handle;
        try {
        	/*
        		(ﾉಥДಥ)ﾉ︵┻━┻･/
        	*/
        	java.lang.reflect.Field fCursorDrawableRes = android.widget.TextView.class.getDeclaredField("mCursorDrawableRes");
        	fCursorDrawableRes.setAccessible(true);
        	int mCursorDrawableRes = fCursorDrawableRes.getInt(editText);
        	java.lang.reflect.Field fEditor = android.widget.TextView.class.getDeclaredField("mEditor");
        	fEditor.setAccessible(true);
        	java.lang.Object editor = fEditor.get(editText);
        	Class<?> clazz = editor.getClass();
        	java.lang.reflect.Field fCursorDrawable = clazz.getDeclaredField("mCursorDrawable");
        	fCursorDrawable.setAccessible(true);
        	android.graphics.drawable.Drawable[] drawables = new android.graphics.drawable.Drawable[2];
        	drawables[0] = editText.getContext().getResources().getDrawable(mCursorDrawableRes);
        	drawables[1] = editText.getContext().getResources().getDrawable(mCursorDrawableRes);
        	drawables[0].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        	drawables[1].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        	fCursorDrawable.set(editor, drawables);
        } catch (Throwable ignored) {
        
        }
    }
    
    public static void SetImeOptions117(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setImeOptions(value);
    }
    
    public static void SetInputType118(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setInputType(value);
    }
    
    public static void SetPlaceholderColor119(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setHintTextColor(value);
    }
    
    public static void SetPlaceholderText120(final Object handle,final String value)
    {
        ((android.widget.TextView)handle).setHint(value);
    }
    
    public static void SetSelectionColor121(final Object handle,final int color)
    {
        ((android.widget.TextView)handle).setHighlightColor(color);
    }
    
}
