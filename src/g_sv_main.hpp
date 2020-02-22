﻿#pragma once
#include "cvar.hpp"

extern cvar_t* g_disabledefcmdprefix;
extern cvar_t* g_allowConsoleSay;
extern cvar_t* g_logTimeStampInSeconds;
extern cvar_t* g_debugBullets;
extern cvar_t* g_smoothClients;

extern "C"
{
    void CCDECL G_SafeServerDObjFree(int handle);
    void CCDECL G_RegisterCvars();
    void CCDECL ExitLevel();
} // extern "C"