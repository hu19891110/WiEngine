/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef */

#ifndef _Included_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
#define _Included_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_UNKNOWN
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_UNKNOWN 0L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_REVOLUTE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_REVOLUTE 1L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_PRISMATIC
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_PRISMATIC 2L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_DISTANCE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_DISTANCE 3L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_PULLEY
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_PULLEY 4L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_MOUSE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_MOUSE 5L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_GEAR
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_GEAR 6L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_LINE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_LINE 7L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_WELD
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_WELD 8L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_FRICTION
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_FRICTION 9L
#undef com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_ROPE
#define com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_TYPE_ROPE 10L
/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    nativeNew
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_nativeNew
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    initialize
 * Signature: (Lcom/wiyun/engine/box2d/dynamics/Body;Lcom/wiyun/engine/box2d/dynamics/Body;FFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_initialize
  (JNIEnv *, jobject, jobject, jobject, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setLocalAnchorA
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setLocalAnchorA
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setLocalAnchorB
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setLocalAnchorB
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setLocalAxisA
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setLocalAxisA
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    nativeGetLocalAnchorA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_nativeGetLocalAnchorA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    nativeGetLocalAnchorB
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_nativeGetLocalAnchorB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    nativeGetLocalAxisA
 * Signature: (Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_nativeGetLocalAxisA
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setReferenceAngle
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setReferenceAngle
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    getReferenceAngle
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_getReferenceAngle
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setEnableLimit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setEnableLimit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    isEnableLimit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_isEnableLimit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setLowerTranslation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setLowerTranslation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    getLowerTranslation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_getLowerTranslation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setUpperTranslation
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setUpperTranslation
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    getUpperTranslation
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_getUpperTranslation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setEnableMotor
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setEnableMotor
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    isEnableMotor
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_isEnableMotor
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setMotorSpeed
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setMotorSpeed
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    getMotorSpeed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_getMotorSpeed
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    setMaxMotorForce
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_setMaxMotorForce
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef
 * Method:    getMaxMotorForce
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_box2d_dynamics_joints_PrismaticJointDef_getMaxMotorForce
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
