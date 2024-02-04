#ifndef GAME_H
#define GAME_H

typedef struct {
	char* gameName;
	int majVer;
	int minVer;
	int patchVer;
} Game;

/*
* @brief Main game function executed at the beggining of the program.
* @return Void.
*/
void initGame();

/*
* @brief Load game window.
* @return Void.
*/
void loadWindow(char* gamename);

/*
* @brief Load titlescreen.
* @return Void.
*/
void drawTitleScreen(char* gamename);

#endif GAME_H
