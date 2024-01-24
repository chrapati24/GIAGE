#include <iostream>
#include "include/GIAGEStartup.h"

int main(void)
{
	std::cout << "Hello world!\n";
	std::cout << "[GIAGE] Init startup\n";
	GIAGEStartup::InitMainWindow();
	return 0;
}
