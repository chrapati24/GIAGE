#include "game.h"
#include "raylib.h"

void initGame()
{
	loadWindow();
}

void loadWindow()
{
	InitWindow(1280, 720, "GIAGE");
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		EndDrawing();
	}
	CloseWindow();
}
