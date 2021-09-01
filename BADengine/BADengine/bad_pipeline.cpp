#include "bad_pipeline.hpp"

#include <iostream>
#include <fstream>
#include <stdexcept>

namespace bad {

	BadPipeline::BadPipeline(const std::string& vertFilepath, const std::string& fragFilepath) {
		CreateGraphicsPipeline(vertFilepath, fragFilepath);
	}

	std::vector<char> BadPipeline::readFile(const std::string& filepath) {
		std::ifstream file{ filepath, std::ios::ate, std::ios::binary };

		if (!file.is_open()) {
			throw std::runtime_error("Failed to open file: " + filepath);
		}

		size_t fileSize = static_cast<size_t>(file.tellg());
		std::vector<char> buffer(fileSize);

		file.seekg(0);
		file.read(buffer.data(), fileSize);

		file.close();
		return buffer;
	}

	void BadPipeline::CreateGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath) {
		auto vertCode = readFile(vertFilepath);
		auto fragCode = readFile(fragFilepath);

		std::cout << "Vertex code size: " << vertCode.size() << std::endl;
		std::cout << "Frag code size: " << fragCode.size() << std::endl;
	}
}