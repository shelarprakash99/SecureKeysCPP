// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("securekeyscpp");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("securekeyscpp")
//      }
//    }

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_securekeyscpp_getSecureKeys_getRandomKey(JNIEnv *env, jobject thiz) {
        std::string hello = "JSDEHSK48934FG43";
    return env->NewStringUTF(hello.c_str());
}