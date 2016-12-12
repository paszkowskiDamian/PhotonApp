#include "pixelMatrix.h"


pixelMatrix::pixelMatrix(int width, int height)
{
	_pixelTable.resize(height);
	for (auto row : _pixelTable)
	{
		row.resize(width);
	}
}

pixelMatrix::~pixelMatrix()
{
}
