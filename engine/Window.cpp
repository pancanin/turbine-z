#include "Window.h"

#include <GLFW/glfw3.h>

int Window::init(int width, int height, std::string label) {
	window = glfwCreateWindow(width, height, label.c_str(), NULL, NULL);

	if (window == nullptr) {
		return -1;
	}

	return 0;
}

void Window::assignAsMain() {
	glfwMakeContextCurrent(window);
}