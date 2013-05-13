/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_fruitfly_ovr_OculusRift */

#ifndef _Included_de_fruitfly_ovr_OculusRift
#define _Included_de_fruitfly_ovr_OculusRift
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    initSubsystem
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_fruitfly_ovr_OculusRift_initSubsystem
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    pollSubsystem
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift_pollSubsystem
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    destroySubsystem
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift_destroySubsystem
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    setPredictionEnabled
 * Signature: (FB)V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1setPredictionEnabled
  (JNIEnv *, jobject, jfloat delta, jboolean enable);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getHResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_fruitfly_ovr_OculusRift__1getHResolution
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVResolution
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_de_fruitfly_ovr_OculusRift__1getVResolution
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getHScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getHScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVScreenSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getVScreenSize
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getVScreenCenter
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getVScreenCenter
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getEyeToScreenDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getEyeToScreenDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getLensSeparationDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getLensSeparationDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getInterpupillaryDistance
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getInterpupillaryDistance
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _setInterpupillaryDistance
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_de_fruitfly_ovr_OculusRift__1setInterpupillaryDistance
  (JNIEnv *, jobject, jfloat ipd);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK0
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK0
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK1
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK1
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK2
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK2
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getDistortionK3
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getDistortionK3
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection0
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection0
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection1
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection1
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection2
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection2
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getChromaAbCorrection3
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getChromaAbCorrection3
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getYaw
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getYaw
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getPitch
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getPitch
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getRoll
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_de_fruitfly_ovr_OculusRift__1getRoll
  (JNIEnv *, jobject);

/*
 * Class:     de_fruitfly_ovr_OculusRift
 * Method:    _getEyeRenderParams
 * Signature: ()F
 */
JNIEXPORT jobject JNICALL Java_de_fruitfly_ovr_OculusRift__1getEyeRenderParams(
   JNIEnv *env, 
   jobject thisObj,
   jint viewportX,
   jint viewportY,
   jint viewportWidth,
   jint viewportHeight,
   jfloat clipNear,
   jfloat clipFar);

#ifdef __cplusplus
}
#endif
#endif
