#include "game.h"
#include "raylib.h"
#include <stdio.h>

void initGame()
{
	Game TGJA = {
		"TGJA",
		1,
		0,
		0
	};
	loadWindow(TGJA.gameName);
}

void loadWindow(char* gamename)
{
	char* getGamename = gamename;
	InitWindow(1280, 720, gamename);
	while (!WindowShouldClose()) {
		drawTitleScreen(getGamename);
	}
	CloseWindow();
}

void drawTitleScreen(char* gamename) 
{
	BeginDrawing();
	ClearBackground(RAYWHITE);
	DrawText(gamename, 100, 100, 96, BLACK);
	DrawText("Press Enter to continue.", 100, 200, 52, BLACK);
	if (IsKeyPressed(KEY_ENTER)) {
		printf("Enter was pressed.\n");
	}
	EndDrawing();
}
