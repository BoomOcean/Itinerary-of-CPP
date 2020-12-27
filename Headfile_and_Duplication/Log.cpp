#include "Common.h"
#include "Log.h"

#include <iostream>

void InitLog()
{
	Log("Initializing Log")
}

void Log(const char* message)
{
	std::count << message << std::endl;
}