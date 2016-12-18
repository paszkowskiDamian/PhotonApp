#include "image.h"


void image::getContent()
{
	std::vector<char> fileContent;
	char bit = 0;

	std::ifstream file(_filename, std::ios::in | std::ios::binary | std::ios::ate);

	if (!file.is_open())
		throw std::runtime_error("Opening file error");

	int filesize = file.tellg();
	fileContent.resize(filesize);

	file.seekg(0, std::ios::beg);

	auto i = 0;
	while (file.get(bit))
	{
		fileContent[i++] = bit;
	}

	_fileContent = fileContent;
}

image::image(std::string filename) : _filename(filename)
{
	getContent();
}


image::~image()
{
}
