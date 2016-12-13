#include "bitmap.h"



bitmap::bitmap(std::string filename) : image(filename)
{
	auto fileContent = _fileContent();
	_headers = new bmpHeaders(fileContent);
	_pixels = new pixelMatrix(_headers->getWidth(), _headers->getHeight());
	_pixels->setPixels(fileContent);
}

void bitmap::save(std::string fileName)
{
	std::ofstream saveFile(fileName, std::ios::out | std::ios::binary | std::ios::ate);

	if (!saveFile.is_open())
		throw std::runtime_error("save file open error");

	saveFile << _headers;
	saveFile << _pixels;
}

bitmap::~bitmap()
{
	delete _headers;
}
