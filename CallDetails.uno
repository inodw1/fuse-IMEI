using Uno.Threading;
using Uno;
using Uno.UX;
using Uno.Compiler.ExportTargetInterop;
using Android;
using Uno.Permissions;
using Fuse;
using Fuse.Scripting;

[extern(Android) ForeignInclude(Language.Java, "android.app.Activity",
                                               "android.content.Context",
                                               "android.os.Bundle",
                                               "android.net.Uri",
                                               "java.lang.StringBuffer",
                                               "java.util.Date",
                                               "android.telephony.TelephonyManager")]

[UXGlobalModule]
public class CallDetails : NativeModule{
    static readonly CallDetails _instance;
    static string getPermission; 

    public CallDetails(){
        if (_instance != null) return;
    	_instance = this;
    	Resource.SetGlobalKey(_instance, "CallDetails");
        AddMember(new NativeFunction("callHistory",(NativeCallback)callHistory));
    }

    object callHistory(Context c, object[] args){
        var permissionPromise = Permissions.Request(Permissions.Android.READ_PHONE_STATE);
        permissionPromise.Then(OnPermitted, OnRejected);
        return getPermission;
    }

    void OnPermitted(PlatformPermission permission)
    {
         debug_log "You can access the Call_History now";
         getPermission = callHistoryImpl();
    }

    void OnRejected(Exception e)
    {
        debug_log "Blast: " + e.Message;
    }

    [Foreign(Language.Java)]
    public static extern(Android) string callHistoryImpl()
    @{
        Activity Context = com.fuse.Activity.getRootActivity();
        TelephonyManager tm = (TelephonyManager)Context.getSystemService(Context.TELEPHONY_SERVICE);
        String val = tm.getDeviceId();//getSubscriberId() for imsi
    	return val;
    
    @}      

    static extern(!Android) string callHistoryImpl(){
        debug_log("Applicatio is not supported on this platform.");
        return null;
    }

}