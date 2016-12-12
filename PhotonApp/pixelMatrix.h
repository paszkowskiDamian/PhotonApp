#pragma once
#include <vector>
#include "pixel.h"

class pixelMatrix
{
	std::vector<std::vector<pixel*>> _pixelTable;

public:
	pixelMatrix(int,int);
	~pixelMatrix();

	void setPixels(std::vector<char> file);

};

