#include "debug.h"
#include <cstdio>

void debug_success(const char* dbg_msg)
{
	printf("\x1b[32m[GIAGE DEBUG - SUCCESS] %s", dbg_msg);
	printf("\x1b[0m\n");
}

void debug_warn(const char* dbg_msg)
{
	printf("\x1b[33m[GIAGE DEBUG - WARNING] %s", dbg_msg);
	printf("\x1b[0m\n");
}

void debug_error(const char* dbg_msg)
{
	printf("\x1b[31m[GIAGE DEBUG - ERROR] %s", dbg_msg);
	printf("\x1b[0m\n");
}

