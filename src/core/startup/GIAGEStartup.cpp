#include <iostream>
#include "../../include/GlobalIncludes.h"
#include "../../include/GIAGEStartup.h"

void GIAGEStartup::InitMainWindow()
{
	InitWindow(1366, 768, "[EXPERIMENTAL] Main Window - GIAGE");
	SetTargetFPS(50);
	Rectangle TestWindowDimension = { 5, 25, 600, 300 };
	Vector3 TestCubePosition = { 1.0f , 1.0f, 1.0f };
	Camera3D camera = { 0 };
	camera.position = Vector3 { 0.0f, 10.0f, 10.0f };  // Camera position
	camera.target = Vector3 { 0.0f, 0.0f, 0.0f };      // Camera looking at point
	camera.up = Vector3 { 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
	camera.fovy = 45.0f;                                // Camera field-of-view Y
	camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type
	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(RAYWHITE);
			GuiWindowBox(TestWindowDimension, "TestWindow");
			BeginMode3D(camera);
				DrawCube(TestCubePosition, 1.0f, 1.0f, 1.0f, SKYBLUE);
				DrawCubeWires(TestCubePosition, 1.0f, 1.0f, 1.0f, BLACK);
				DrawGrid(10, 1.0f);
			EndMode3D();
			DrawFPS(5, 5);
		EndDrawing();
	}
	CloseWindow();
}

