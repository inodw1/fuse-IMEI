package com.foreign.Uno;
import com.Bindings.*;
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
import com.uno.UnoObject;

public class Func_String extends com.uno.UnoObject
{
    public Func_String(long ptr) { super(ptr); }
    public boolean run(final String arg) {
        return ExternedBlockHost.callUno_Func_String(this,arg);
    }
}
