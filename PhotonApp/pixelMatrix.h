#pragma once
#include <vector>
#include <iostream>
#include "pixel.h"


class pixelMatrix
{
	std::vector<std::vector<pixel*>> _pixelTable;

public:
	pixelMatrix(int,int);
	~pixelMatrix();

	void setPixels(std::vector<unsigned char> file);

	friend std::ostream& operator<< (std::ostream &out, const pixelMatrix &table);

};

