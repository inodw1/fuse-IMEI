package com.foreign;

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

// user defined imports
import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.net.Uri;
import java.lang.StringBuffer;
import java.util.Date;
import android.telephony.TelephonyManager;

public class CallDetails
{
    static void debug_log(Object message)
    {
        android.util.Log.d("CallHistory", (message==null ? "null" : message.toString()));
    }

    public static String callHistoryImpl377()
    {
        Activity Context = com.fuse.Activity.getRootActivity();
        TelephonyManager tm = (TelephonyManager)Context.getSystemService(Context.TELEPHONY_SERVICE);
        String val = tm.getDeviceId();//getSubscriberId() for imsi
        	return val;
    }
    
}
