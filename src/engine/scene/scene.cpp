#include "../giage.h"
#include <cstdio>

namespace GIAGE
{
	void Scene::setSceneName(char* name)
	{
		this->sceneName = name;
	}

	void Scene::setSceneId(int id)
	{
		this->sceneId = id;
	}

	void Scene::setSceneModel(char* model)
	{
		this->sceneModel = model;
	}

	void Scene::drawScene()
	{
		char* scn_model = this->sceneModel;
		LoadModel(scn_model);
		printf("\e[0;32m[GIAGE DEBUG] model was loaded from %s", scn_model);
	}
}