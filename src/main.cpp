#include "raylib.h"
#include "imgui.h"
#include "libs/rlImGui/rlImGui.h"
#include <cstdio>
#include <cstdlib>

#include "editor/editor.h"

int main(void)
{
	int widthScreen = 1920;
	int heightScreen = 960;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(widthScreen, heightScreen, "GIAGE");

	rlImGuiSetup(true);

	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(DARKGRAY);
			GIAGE_Editor::initEditor();
		EndDrawing();
	}
	rlImGuiShutdown();
	CloseWindow();

	return 0;
}


