/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_sourceforge_resample_Resample */

#ifndef _Included_net_sourceforge_resample_Resample
#define _Included_net_sourceforge_resample_Resample
#ifdef __cplusplus
extern "C" {
#endif
#undef net_sourceforge_resample_Resample_MAX_CHANNELS
#define net_sourceforge_resample_Resample_MAX_CHANNELS 2L
#undef net_sourceforge_resample_Resample_CHANNEL_LEFT
#define net_sourceforge_resample_Resample_CHANNEL_LEFT 0L
#undef net_sourceforge_resample_Resample_CHANNEL_RIGHT
#define net_sourceforge_resample_Resample_CHANNEL_RIGHT 1L
/*
 * Class:     net_sourceforge_resample_Resample
 * Method:    downsample
 * Signature: ([S[S[S)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_resample_Resample_downsample
  (JNIEnv *, jclass, jshortArray, jshortArray, jshortArray);

/*
 * Class:     net_sourceforge_resample_Resample
 * Method:    initialize
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_resample_Resample_initialize
  (JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     net_sourceforge_resample_Resample
 * Method:    process
 * Signature: ([S[SIZ)I
 */
JNIEXPORT jint JNICALL Java_net_sourceforge_resample_Resample_process
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jboolean);

/*
 * Class:     net_sourceforge_resample_Resample
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_net_sourceforge_resample_Resample_close
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
