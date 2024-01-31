#include "stdio.h"
#include "player/player.h"
#include "gui/hud.h"
#include "raylib.h"

int main(void)
{
	Player monJoueur = { 1.0f, 1.0f, 1.0f, 100, 0 };
	// CreatePlayer(monJoueur);
	printf("Position X : %f, Position Y : %f, Position Z : %f\n", monJoueur.initialPosX, monJoueur.initialPosY, monJoueur.initialPosZ);
	InitWindow(1280, 720, "GIAGE");
	enum PlayerStatus vieJoueur = PLAYER_DEAD;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);
		initHUD(monJoueur);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}

