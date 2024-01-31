#include "hud.h"
#include "raylib.h"
#include "stdio.h"

void initHUD(Player player)
{
	char HUDScore[20];
	char HUDCoin[20];
	sprintf(HUDScore, "Score : %d", player.globalScore);
	sprintf(HUDCoin, "Coins : %d", player.levelCoins);
	DrawText(HUDScore, 5, 5, 15, WHITE);
	DrawText(HUDCoin, 5, 25, 15, WHITE);
}


