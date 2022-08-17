#pragma once

#include <string>

#ifdef EXPORT_DLL
#define LOGGER_API __declspec(dllexport)
#else
#define LOGGER_API
#endif

class LOGGER_API Logger
{
public:
	Logger() = default;
	~Logger() = default;
	
	static void Info(const std::string& message);
	static void Warn(const std::string& warning);
	static void Error(const std::string& error);
};
