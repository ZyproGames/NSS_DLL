#include "me_pk2_rpg_game_sound_nes_NintendoSoundSystem.h"

using namespace std;

vector<Music_Player*> players;

JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssInit
(JNIEnv* env, jobject object, jlong r) {
	Music_Player* player = new Music_Player;
	long rate = (long)r;
	int id = players.size();

	players.push_back(player);
	player->init(rate);

	return (jint)id;
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssLoadFile
(JNIEnv* env, jobject obj, jint id, jstring p) {
	int playerId = (int)id;
	const char* path = env->GetStringUTFChars(p, NULL);

	Music_Player* player = players[playerId];
	player->load_file(path);
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssStartTrack
(JNIEnv* env, jobject obj, jint id, jint t) {
	int playerId = (int)id;
	int track = (int)t;

	Music_Player* player = players[playerId];
	player->start_track(track);
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssStop
(JNIEnv* env, jobject obj, jint id) {
	int playerId = (int)id;

	Music_Player* player = players[playerId];
	player->stop();
}

JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssTrackCount
(JNIEnv* env, jobject obj, jint id) {
	int playerId = (int)id;

	Music_Player* player = players[playerId];
	return (jint)player->track_count();
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssPause
(JNIEnv* env, jobject obj, jint id, jint b) {
	int playerId = (int)id;
	int boo = (int)b;

	Music_Player* player = players[playerId];
	player->pause(boo);
}

JNIEXPORT jboolean JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssTrackEnded
(JNIEnv* env, jobject, jint id) {
	int playerId = (int)id;

	Music_Player* player = players[playerId];
	return (jboolean)player->track_ended();
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssSetStereoDepth
(JNIEnv* env, jobject, jint id, jdouble d) {
	int playerId = (int)id;
	double depth = (double)d;

	Music_Player* player = players[playerId];
	player->set_stereo_depth(depth);
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssSetTempo
(JNIEnv* env, jobject, jint id, jdouble t) {
	int playerId = (int)id;
	double tempo = (double)t;

	Music_Player* player = players[playerId];
	player->set_tempo(t);
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssMuteVoices
(JNIEnv* env, jobject, jint id, jint m) {
	int playerId = (int)id;
	int mask = (int)m;

	Music_Player* player = players[playerId];
	player->mute_voices(mask);
}

JNIEXPORT void JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssVolume
(JNIEnv*, jobject, jint id, jint vol) {
	int playerId = (int)id;

	Music_Player* player = players[playerId];
	player->set_volume((int)vol);

	printf("Volume call\n");
}

JNIEXPORT jint JNICALL Java_me_pk2_rpg_game_sound_nes_NintendoSoundSystem_nssMaxVolume
(JNIEnv*, jobject, jint id) {
	int playerId = (int)id;

	Music_Player* player = players[playerId];
	return player->get_max_volume();
}