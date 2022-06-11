#pragma once

#include <string>

struct GLFWwindow;

class Window
{
public:
	int init(int width, int height, std::string label);
	void assignAsMain();
private:
	GLFWwindow* window;
};
