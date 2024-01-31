#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
	float initialPosX;
	float initialPosY;
	float initialPosZ;
	int lifeScore;
	int lifeCredits;
	int globalScore;
	int levelCoins;
} Player;

typedef enum PlayerStatus {
	PLAYER_ALIVE = 1,
	PLAYER_DEAD = 0
} PlayerStatus;

/*
* @brief Check all of player components and build it into our game.
* @param concernedPlayer The Player instance of our game.
* @return Void.
*/
void CreatePlayer(Player concernedPlayer);

/*
* @brief Destroy our player at the end of the level and game.
* @param concernedPlayer The Player instance of our game.
* @return Void.
*/
void DestroyPlayer(Player concernedPlayer);

/*
* @brief Check if our player is in collision with an enemy
* @param concernedPlayer The Player instance of our game.
* @return Void.
*/
void onPlayerIsEnemyCollided(Player concernedPlayer);

/*
* @brief Check if our player have all of level coins
* @param concernedPlayer The Player instance of our game.
* @return Void.
*/
void onPlayerHaveAllOfLevelCoins(int levelCoinsCounter);

/*
* @brief Check if our player is dead.
* @param concernedPlayer The Player instance of our game.
* @return Void.
*/
void onPlayerIsDead(Player concernedPlayer);

#endif
