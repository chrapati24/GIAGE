#include "raylib.h"
#include "imgui.h"
#include "libs/rlImGui/rlImGui.h"
#include <cstdio>
#include <cstdlib>

#include "editor/editor.h"

int main(void)
{
	int widthScreen = 1280;
	int heightScreen = 720;
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


