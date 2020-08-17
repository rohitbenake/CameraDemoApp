//
// Created by R-BNK on 8/14/2020.
//

#ifndef CAMERADEMOAPP_TEST_LIBRARY_H
#define CAMERADEMOAPP_TEST_LIBRARY_H

#include <jni.h>
#include <string.h>
#include <android/log.h>

#define  LOG_TAG    "TestLibrary"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

jstring Java_com_clarion_camerademoapp_MainActivity_TestPrint(JNIEnv* env,jobject obj);

#endif //CAMERADEMOAPP_TEST_LIBRARY_H
