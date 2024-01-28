#include <iostream>
#include "../../include/GlobalIncludes.h"
#include "../../include/GIAGEStartup.h"

void GIAGEStartup::InitMainWindow()
{
	std::cout << "[GIAGE] Init main window\n";
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(1366, 768, "[EXPERIMENTAL] Main Window - GIAGE");
	SetTargetFPS(50);
	GIAGEStartup::InitDefaultInterface();
	CloseWindow();
}

void GIAGEStartup::InitDefaultInterface()
{
	Vector3 DefaultCubePosition = { 1.0f , 1.0f, 1.0f };
	Vector3 DefaultCubeSize = { 1.0f, 1.0f, 1.0f };
	Camera3D camera = { 0 };
	camera.position = Vector3{ 0.0f, 10.0f, 10.0f };  // Camera position
	camera.target = Vector3{ 0.0f, 0.0f, 0.0f };      // Camera looking at point
	camera.up = Vector3{ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
	camera.fovy = 45.0f;                                // Camera field-of-view Y
	camera.projection = CAMERA_PERSPECTIVE;             // Camera mode type
	while (!WindowShouldClose()) {
		BeginDrawing();
			ClearBackground(RAYWHITE);
			GuiLoadStyleDefault();
			// Make 3D space
			BeginMode3D(camera);
				DrawCube(DefaultCubePosition, DefaultCubeSize.x, DefaultCubeSize.y, DefaultCubeSize.z, RED);
				DrawCubeWires(DefaultCubePosition, DefaultCubeSize.x, DefaultCubeSize.y, DefaultCubeSize.z, BLACK);
				DrawGrid(30, 0.5f);
			EndMode3D();
			// Make Dev. GUI
			DrawRectangle(5, 5, 200, 400, SKYBLUE);
			DrawRectangleLines(5, 5, 200, 400, BLACK);
			DrawText("Editing TestCube", 7, 7, 12, BLACK);
			// Position X
			DrawText("Pos. X", 7, 25, 12, BLACK);
			Rectangle Minus_XPosCube = { 47, 25, 25, 12 };
			Rectangle Plus_XPosCube = { 77, 25, 25, 12 };
			if (GuiButton(Minus_XPosCube, "-")) {
				DefaultCubePosition.x -= 1.0f;
			}
			else if (GuiButton(Plus_XPosCube, "+")) {
				DefaultCubePosition.x += 1.0f;
			}
			// Position Y
			DrawText("Pos. Y", 7, 50, 12, BLACK);
			Rectangle Minus_YPosCube = { 47, 50, 25, 12 };
			Rectangle Plus_YPosCube = { 77, 50, 25, 12 };
			if (GuiButton(Minus_YPosCube, "-")) {
				DefaultCubePosition.y -= 1.0f;
			}
			else if (GuiButton(Plus_YPosCube, "+")) {
				DefaultCubePosition.y += 1.0f;
			}
			// Position Z
			DrawText("Pos. Z", 7, 75, 12, BLACK);
			Rectangle Minus_ZPosCube = { 47, 75, 25, 12 };
			Rectangle Plus_ZPosCube = { 77, 75, 25, 12 };
			if (GuiButton(Minus_ZPosCube, "-")) {
				DefaultCubePosition.z -= 1.0f;
			}
			else if (GuiButton(Plus_ZPosCube, "+")) {
				DefaultCubePosition.z += 1.0f;
			}
			// Size X
			DrawText("Size X", 7, 100, 12, BLACK);
			Rectangle Minus_XSizeCube = { 47, 100, 25, 12 };
			Rectangle Plus_XSizeCube = { 77, 100, 25, 12 };
			if (GuiButton(Minus_XSizeCube, "-")) {
				DefaultCubeSize.x -= 1.0f;
			}
			else if (GuiButton(Plus_XSizeCube, "+")) {
				DefaultCubeSize.x += 1.0f;
			}
			// Size Y
			DrawText("Size Y", 7, 125, 12, BLACK);
			Rectangle Minus_YSizeCube = { 47, 125, 25, 12 };
			Rectangle Plus_YSizeCube = { 77, 125, 25, 12 };
			if (GuiButton(Minus_YSizeCube, "-")) {
				DefaultCubeSize.y -= 1.0f;
			}
			else if (GuiButton(Plus_YSizeCube, "+")) {
				DefaultCubeSize.y += 1.0f;
			}
			// Size Z
			DrawText("Size Z", 7, 150, 12, BLACK);
			Rectangle Minus_ZSizeCube = { 47, 150, 25, 12 };
			Rectangle Plus_ZSizeCube = { 77, 150, 25, 12 };
			if (GuiButton(Minus_ZSizeCube, "-")) {
				DefaultCubeSize.z -= 1.0f;
			}
			else if (GuiButton(Plus_ZSizeCube, "+")) {
				DefaultCubeSize.z += 1.0f;
			}
		EndDrawing();
	}
}


