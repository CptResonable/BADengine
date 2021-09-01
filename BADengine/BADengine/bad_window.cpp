#include "bad_window.hpp"

namespace bad {
	BadWindow::BadWindow(int w, int h, std::string name) : width{ w }, height{ h }, windowName{ name } {
		initWindow();
	}

	BadWindow::~BadWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void BadWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}

	bool BadWindow::shouldClose() {
		return glfwWindowShouldClose(window);
	}
}