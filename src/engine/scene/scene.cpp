#include "../giage.h"
#include "../../debug/debug.h"
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
		char* scn_model_url = this->sceneModel;
		Model sceneModel = LoadModel(scn_model_url);
		if (IsModelReady(sceneModel)) {
			debug_success("Model as been loaded.");
		} else {
			debug_error("This model cannot been loaded.");
		}
	}
}