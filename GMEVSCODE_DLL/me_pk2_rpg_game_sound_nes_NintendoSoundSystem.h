/* DO NOT EDIT THIS FILE - it is machine generated */
#include "pch.h"
#include <jni.h>
#include <Windows.h>
#include <vector>
#include <string>
#include "player/Music_Player.h"

/* Header for class me_pk2_rpg_game_sound_nes_NintendoSoundSystem */

#ifndef _Included_me_pk2_rpg_game_sound_nes_NintendoSoundSystem
#define _Included_me_pk2_rpg_game_sound_nes_NintendoSoundSystem
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssInit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssInit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssLoadFile
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssLoadFile
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssStartTrack
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssStartTrack
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssStop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssStop
  (JNIEnv *, jobject, jint);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssTrackCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssTrackCount
  (JNIEnv *, jobject, jint);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssPause
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssPause
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssTrackEnded
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssTrackEnded
  (JNIEnv *, jobject, jint);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssSetStereoDepth
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssSetStereoDepth
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssSetTempo
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssSetTempo
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     me_pk2_rpg_game_sound_nes_NintendoSoundSystem
 * Method:    nssMuteVoices
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssMuteVoices
  (JNIEnv *, jobject, jint, jint);

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssVolume
  (JNIEnv*, jobject, jint, jint);

JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssMaxVolume
  (JNIEnv*, jobject, jint);


#ifdef __cplusplus
}
#endif
#endif