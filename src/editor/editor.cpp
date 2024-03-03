#include "editor.h"
#include "raylib.h"
#include "../libs/rlImGui/rlImGui.h"
#include "imgui.h"
#include <cstdio>

bool about_open = false;

void GIAGE_Editor::initEditor()
{
	rlImGuiBegin();
		GIAGE_Editor::initMainMenuBar();
		GIAGE_Editor::openAboutWindow();
		GIAGE_Editor::init3DView();
		// GIAGE_Editor::initToolBox();
	rlImGuiEnd();
}

void GIAGE_Editor::initMainMenuBar()
{
	if (ImGui::BeginMainMenuBar()) {
		if (ImGui::BeginMenu("File")) {
			if (ImGui::MenuItem("New project")) {
				// GIAGE_Editor::initProjectCreator();
			}
			if (ImGui::MenuItem("Open a project")) {
				// GIAGE_Editor::initFileExplorer();
			}
			ImGui::Separator();
			if (ImGui::MenuItem("Save project")) {
				// GIAGE_Editor::saveProjectStatement();
			}
			if (ImGui::MenuItem("Save project as...")) {
				// GIAGE_Editor::initProjectSaveProcess();
			}
			ImGui::Separator();
			if (ImGui::MenuItem("Close GIAGE")) {
				// CloseWindow();
			}
			ImGui::EndMenu();
		}
		if (ImGui::MenuItem("Edit", "Alt+E")) {
			printf("Test - Edit\n");
		}
		if (ImGui::MenuItem("Project", NULL)) {
			printf("Test - Project\n");
		}
		if (ImGui::MenuItem("Window", NULL)) {
			printf("Test - Window\n");
		}
		if (ImGui::BeginMenu("Help")) {
			if (ImGui::MenuItem("About GIAGE")) {
				about_open = true;
				printf("%d\n", about_open);
				GIAGE_Editor::openAboutWindow();
			}
			ImGui::EndMenu();
		}
		ImGui::EndMainMenuBar();
	}
}

void GIAGE_Editor::init3DView()
{
	ImGui::Begin("3D View", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoMove);
		ImGui::SetWindowSize(ImVec2(960, 480));
	ImGui::End();
}

void GIAGE_Editor::openAboutWindow()
{
	if (about_open) {
		ImGui::Begin("About GIAGE");
			ImGui::Text("Copyright (c) 2024 Chrapati. All rights reserved.");
			ImGui::Text("This engine use freesoftware components.");
			ImGui::Text("Check out official GIAGE repo.");
			ImGui::Separator();
			ImGui::Text("Version : %d.%d.%d", GIAGE_MAJVER, GIAGE_MINVER, GIAGE_PATCHVER);
		if (ImGui::Button("Check repo")) {
			OpenURL("https://github.com/chrapati24/GIAGE");
		}
		if (ImGui::Button("Close")) {
			about_open = false;
		}
		ImGui::End();
	}
}
