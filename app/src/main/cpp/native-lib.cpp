#include <jni.h>
#include <string>
#include "sample_rate_change_api.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_taylor_myapplication3_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_com_taylor_myapplication3_MainActivity_intFromUi(JNIEnv *env, jobject thiz) {
}extern "C"
JNIEXPORT jint JNICALL
Java_com_taylor_myapplication3_MainActivity_intFrmm(JNIEnv *env, jobject thiz, jchar char1) {
//    return TT_SRC_Get_Version(reinterpret_cast<INT8 *>(char1), 8);
    return 1;
}