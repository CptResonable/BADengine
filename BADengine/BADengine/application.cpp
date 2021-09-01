#include "application.hpp"

namespace bad {
	void Application::run() {
		while (!badWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}