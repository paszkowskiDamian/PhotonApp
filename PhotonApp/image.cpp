#include "image.h"


std::vector<char> image::_fileContent() const
{
	std::vector<char> fileContent;

	std::ifstream file(_filename, std::ios::in | std::ios::binary | std::ios::ate);

	if (!file.is_open())
		throw std::runtime_error("Opening file error");

	fileContent.resize(file.tellg());
	file.seekg(0, std::ios::beg);

	if (!file.read(&fileContent[0], fileContent.size()))
		throw std::runtime_error("Reading file error");

	return fileContent;
}

image::image(std::string filename) : _filename(filename)
{
}


image::~image()
{
}
