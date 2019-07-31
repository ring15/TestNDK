#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_founq_sdk_testndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_founq_sdk_testndk_JniUtil_sayHello(JNIEnv *env, jclass type) {
    return env->NewStringUTF("HelloWorld!");
}