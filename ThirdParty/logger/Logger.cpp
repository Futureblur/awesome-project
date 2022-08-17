#include "Logger.h"

#include <iostream>

void Logger::Info(const std::string& message)
{
	std::cout << "Info: " << message << std::endl;
}

void Logger::Warn(const std::string& warning)
{
	std::cout << "Warning: " << warning << std::endl;
}

void Logger::Error(const std::string& error)
{
	std::cout << "Error: " << error << std::endl;
}
