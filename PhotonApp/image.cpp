#include "image.h"


std::vector<unsigned char> image::fileContent() const
{
	std::vector<char> fileContent;
	std::vector<unsigned char> unsignedFileContent;

	std::ifstream file(_filename, std::ios::in | std::ios::binary | std::ios::ate);

	if (!file.is_open())
		throw std::runtime_error("Opening file error");

	fileContent.resize(file.tellg());
	file.seekg(0, std::ios::beg);

	if (!file.read(&fileContent[0], fileContent.size()))
		throw std::runtime_error("Reading file error");

	for(auto i = 0; i < fileContent.size() ; i ++)
	{
		unsignedFileContent[i] = static_cast<unsigned char>(fileContent[i]);
	}

	return unsignedFileContent;
}

image::image(std::string filename) : _filename(filename)
{
}


image::~image()
{
}
