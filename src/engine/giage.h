// ================================================================================================
// In this namespace, there is a lot of functions when GIAGE can running for generate
// somes things into the project (like 3D object, 2D HUD/GUI components, player, enemies, etc.).
// Somes UML specifications can be necesary if we want a good stuff in the case of GIAGE dev.
// ------------------------------------------------------------------------------------------------
// Currently, I decide to make a 3D viewport into ImGui based editor for experiment this features
// and prototype my code.
// ================================================================================================

#ifndef GIAGE_H
#define GIAGE_H

#include "raylib.h"

namespace GIAGE
{
	class Game 
	{
	private:
		char* gameName;
		char* gameDescription;
		int gameYear;
		char* gameAuthor;
	public:
		// Methods

		void writeGameManifest();
		void buildGame();
	};

	class Scene
	{
	protected:
		char* sceneName;
		int sceneId;
		char* sceneModel;
	public:
		// Getters

		char* getSceneName();
		int getSceneId();
		char* getSceneModel();

		// Setters

		void setSceneName(char* name);
		void setSceneId(int id);
		void setSceneModel(char* model);

		// Methods

		void drawScene();
		void undrawScene();
	};

	class Object: public Scene
	{
	protected:
		Scene scene;
		char* object_name;
		int object_id;
		char* object_mesh;
	public:
		// Getters

		char* getObjectName();
		char* getObjectMesh();
		int getObjectId();

		// Setters

		void setObjectName(char* name);
		void setObjectId(int id);
		void setObjectMesh(char* mesh);

		// Methods

		void drawObject();
	};
}

#endif

