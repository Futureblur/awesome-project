#include <iostream>

#include "GLFW/glfw3.h"
#include "Logger.h"

int main(int argc, const char** argv)
{
	if(!glfwInit())
		return 1;
	
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	
	auto window = glfwCreateWindow(1280, 720, "Awesome Project", nullptr, nullptr);
	
	if(!window)
	{
		glfwTerminate();
		return 1;
	}
	
	glfwMakeContextCurrent(window);

	while(!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	Logger::Info("Awesome!");

	return 0;
}
