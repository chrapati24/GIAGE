#ifndef PLAYER_H
#define PLAYER_H

#include "stdbool.h"

typedef struct {
	float initialPX;
	float initialPY;
	float initialPZ;
	int globalScore;
	int levelCoinsScore;
	int lifePercentage;
	int lifeCredits;
	int aPlayerStatus;
	char* playerModel;
	char* playerTexture;
} Player;

typedef enum PlayerStatus {
	PLAYER_ALIVE = 1,
	PLAYER_DEAD = 0
} PlayerStatus;

/*
* @brief Create player in the scene.
* @param concernedPlayer : The player in the scene.
* @return Void.
*/
void createPlayer(Player concernedPlayer);

/*
* @brief Check if your player is dead.
* @param concernedPlayer : The player in the scene.
* @return Boolean (True or False).
*/
bool onPlayerIsDead(Player concernedPlayer);

/*
* @brief Check if player life credit is null (0).
* @param concernedPlayer : The player in the scene.
* @return Boolean (True or False).
*/
bool onPlayerLifeCreditsIsNull(Player concernedPlayer);
#endif
