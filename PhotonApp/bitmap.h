#pragma once
#include "image.h"
#include "bmpHeaders.h"
#include <fstream>
#include <vector>

class bitmap :
	public image
{
	bmpHeaders *_headers;
	pixelMatrix *_pixels;

public:
	bitmap(std::string filename);
	void save(std::string);
	~bitmap();
};

