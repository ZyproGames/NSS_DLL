// dllmain.cpp : Define el punto de entrada de la aplicación DLL.
#define SDL_MAIN_HANDLED
#pragma comment(lib, "SDL.lib")
#pragma comment(lib, "SDLmain.lib")
#include "pch.h"
#include "me_pk2_rpg_game_sound_nes_NintendoSoundSystem.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }


    return TRUE;
}

