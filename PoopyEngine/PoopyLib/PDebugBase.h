#pragma once
#include <iostream>
#include <string_view>
#include <Windows.h>

#define WHITE_COLOR FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
#define LOG_COLOR FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
#define WARNING_COLOR FOREGROUND_GREEN | FOREGROUND_RED
#define ERROR_COLOR FOREGROUND_RED

#define LOGBASE(_LogStr, _FileName, _FunctionName, _FunctionLine, _WaringType)	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _WaringType);														\
																				std::cout << _LogStr << " " << "[" << _FileName << "]" << "[" << _FunctionName << ":" << _FunctionLine << "]" << std::endl;	\
																				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE_COLOR);

#define PLOG(_LogStr) LOGBASE(_LogStr, __FILE__, __FUNCTION__, __LINE__, LOG_COLOR);
#define PLOG_WARNING(_LogStr) LOGBASE(_LogStr, __FILE__, __FUNCTION__, __LINE__, WARNING_COLOR);
#define PLOG_ERROR(_LogStr) LOGBASE(_LogStr, __FILE__, __FUNCTION__, __LINE__, ERROR_COLOR);