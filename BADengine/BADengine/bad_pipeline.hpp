#pragma once

#include <string>
#include <vector>

namespace bad {
	class BadPipeline {
	public:
		BadPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
		//~BadPipeline();

	private:
		std::vector<char> readFile(const std::string& filepath);

		void CreateGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath);
	};
}