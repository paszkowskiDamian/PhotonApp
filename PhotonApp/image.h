#pragma once
#include <fstream>
#include <vector>
#include "pixelMatrix.h"

class image
{
	std::string _filename;

protected:
	std::vector<char> _fileContent() const;
	pixelMatrix* _pixels;

public:
	image(std::string);
	//virtual void load() = 0;
	//virtual void save() = 0;
	virtual ~image();
};

