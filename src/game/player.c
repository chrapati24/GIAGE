#include "player.h"

bool onPlayerIsDead(Player concernedPlayer)
{
	if (concernedPlayer.lifePercentage == 0) {
		concernedPlayer.aPlayerStatus = PLAYER_DEAD;
		// Program an algorithm when you have a backup into the game-hub.
		// And you left a life credit.
		concernedPlayer.lifeCredits -= 1;
		return true;
	}
	else {
		// Just return False.
		return false;
	}
}

