#pragma once
#include <fstream>
#include <vector>
#include "pixelMatrix.h"

class image
{
	std::string _filename;

	void getContent();

protected:
	std::vector<char> _fileContent;

public:
	image(std::string);
	virtual void save(std::string) = 0;
	virtual ~image();
};

