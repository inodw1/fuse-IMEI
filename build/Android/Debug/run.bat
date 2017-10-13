:: This file was generated based on C:/Users/Inod/AppData/Local/Fusetools/Packages/UnoCore/1.3.1/Targets/Android/run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

if "%1" == "debug" (
    echo Opening Android Studio
    call gradlew --recompile-scripts
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" -t"CallHistory" "%~dp0app/app.iml"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.callhistory
    "C:\Program Files (x86)\Fuse\uno.exe" adb uninstall com.apps.callhistory
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0CallHistory.apk" ^
    --package=com.apps.callhistory ^
    --activity=CallHistory ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
