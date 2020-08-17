//
// Created by R-BNK on 8/14/2020.
//

#include <test_library.h>

jstring Java_com_clarion_camerademoapp_MainActivity_TestPrint(JNIEnv* env,jobject obj){
    LOGI(" ---> Inside test_library <---");
    return (*env)->NewStringUTF(env,"TestPrint");
}