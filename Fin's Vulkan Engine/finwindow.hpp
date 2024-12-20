#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace finengine {
	class finwindow {
		public:
			finwindow(int w, int h, std::string name);
			~finwindow();

			finwindow(const finwindow&) = delete;
			finwindow &operator = (const finwindow&) = delete;

			bool shouldClose() { return glfwWindowShouldClose(window); }
			
			void createWindowSurface(VkInstance instance, VkSurfaceKHR* surface);
	
		private:
			void initWindow();
			//initialize height and width of the window
			const int width;
			const int height;
			std::string windowName;
			GLFWwindow *window;
	};
}