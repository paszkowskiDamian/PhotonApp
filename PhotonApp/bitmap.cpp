#include "bitmap.h"



bitmap::bitmap(std::string filename) : image(filename)
{

	_headers = new bmpHeaders(_fileContent);
	_pixels = new pixelMatrix(_headers->getWidth(), _headers->getHeight());
	_pixels->setPixels(_fileContent);
}

void bitmap::save(std::string fileName)
{
	std::ofstream saveFile(fileName, std::ios::out | std::ios::binary);

	if (!saveFile.is_open())
		throw std::runtime_error("save file open error");

	//saveFile << *_headers;

	for (auto i = 0; i < 55; i++)
	{
		saveFile << _fileContent[i];
	}
	//saveFile << *_pixels;
	for (auto i = 0 ; i < _fileContent.size() ; i++)
	{
		saveFile << _fileContent[i];
	}

}

bitmap::~bitmap()
{
	delete _headers;
	delete _pixels;
}
