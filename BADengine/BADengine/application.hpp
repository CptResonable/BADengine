#pragma once

#include "bad_window.hpp"

namespace bad {
	class Application {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		BadWindow badWindow{ WIDTH, HEIGHT, "Badass window!" };
	};
}