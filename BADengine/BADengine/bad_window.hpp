#pragma once

#define GLFW_INCLUDE_VULKAN
#include <string>
#include <GLFW/glfw3.h>

namespace bad {
	class BadWindow {
	public:
		BadWindow(int w, int h, std::string name);
		~BadWindow();

		// WTF?
		BadWindow(const BadWindow&) = delete;
		BadWindow& operator = (const BadWindow&) = delete;

		bool shouldClose();
		void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);

	private:

		void initWindow();

		const int width;
		const int height;

		std::string windowName;
		GLFWwindow* window;
	};
}