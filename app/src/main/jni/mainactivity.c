#include <jni.h>

JNIEXPORT jstring JNICALL
Java_kr_heja_hellojni_MainActivity_getMessage(JNIEnv *env, jobject instance) {
    return (*env)->NewStringUTF(env, "Hello JNI");
}