package com.founq.sdk.testndk;

/**
 * Created by ring on 2019/7/31.
 */
public class JniUtil {
    static {
        System.loadLibrary("native-lib");
    }

    public static native String sayHello();
}
