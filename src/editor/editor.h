#ifndef EDITOR_H
#define EDITOR_H

const int GIAGE_MAJVER = 0;
const int GIAGE_MINVER = 0;
const int GIAGE_PATCHVER = 0;

namespace GIAGE_Editor
{
	void initEditor();
	void initMainMenuBar();
	void initToolBox();
	void init3DView();
	void initSolutionExplorer();
	void initObjectSettings();
	void initDebugger();
	void initFileExplorer();
	void openAboutWindow();
}


#endif