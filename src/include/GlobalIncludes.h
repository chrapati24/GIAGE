#pragma once
// Standard libraries
#include <iostream>
// RayLib includes
#include "raylib.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#define _CRT_SECURE_NO_WARNINGS

#if defined(PLATFORM_DESKTOP)
	#define GLSL_VERSION            330
#else   // PLATFORM_ANDROID, PLATFORM_WEB
	#define GLSL_VERSION            100
#endif

#include "rlgl.h"


Vector3 GIAGEVersion = { 1, 0, 0 };

