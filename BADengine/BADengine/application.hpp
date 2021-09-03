#pragma once

#include "bad_window.hpp"
#include "bad_pipeline.hpp"
#include "bad_device.hpp"

namespace bad {
	class Application {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		BadWindow badWindow{ WIDTH, HEIGHT, "Badass window!" };
		BadDevice badDevice{ badWindow };
		BadPipeline badPipeline {badDevice,  "simple_shader.vert.spv", "simple_shader.frag.spv", BadPipeline::defaultPipelineConfigInfo(WIDTH, HEIGHT) };
	};
}