#include "editor.h"
#include "../libs/rlImGui/rlImGui.h"
#include "imgui.h"
#include <cstdio>

void GIAGE_Editor::initEditor()
{
	rlImGuiBegin();
		bool open = true;
		GIAGE_Editor::initMainMenuBar();
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
				// Code GIAGE closing function
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
		if (ImGui::MenuItem("Help", NULL)) {
			printf("Test - Help\n");
		}
		ImGui::EndMainMenuBar();
	}
}
