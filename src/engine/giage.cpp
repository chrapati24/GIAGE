#include "giage.h"

void GIAGE::startEngine(Camera camera)
{
	Vector3 cubePosition = { 0.0f, 0.0f, 0.0f };
	BeginMode3D(camera);
		DrawCube(cubePosition, 1.0f, 1.0f, 1.0f, RED);
		DrawGrid(10, 1.0f);
	EndMode3D();
}

