#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_primary_smhs_1robotics_MainScreen_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
