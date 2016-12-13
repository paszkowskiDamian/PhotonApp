#include "pixelMatrix.h"


pixelMatrix::pixelMatrix(int width, int height)
{
	_pixelTable.resize(height);
	for (auto i = 0 ; i < height ; i++)
	{
		_pixelTable[i].resize(width);
	}
}

pixelMatrix::~pixelMatrix()
{
	int height = _pixelTable.size();
	int width = _pixelTable[0].size();
	for (auto row = 0; row < height; row++)
	{
		for (auto col = 0; col < width; col++)
		{
			delete _pixelTable[row][col];
		}
	}
}

void pixelMatrix::setPixels(std::vector<char> file)
{
	int height = _pixelTable.size();
	int width = _pixelTable[0].size();
	auto fillBits = (4-width % 4) % 4; 
	auto index = 56; // pixel data starts at 55 bit

	for(auto row = 0; row < height; row++)
	{
		for(auto col = 0 ; col < width; col++)
		{
			_pixelTable[row][col] = new pixel(static_cast<int>(file[index]), static_cast<int>(file[++index]), static_cast<int>(file[++index]));
		}
		index += fillBits;
	}
}

std::ostream& operator<<(std::ostream& out, const pixelMatrix& table)
{
	int height = table._pixelTable.size();
	int width = table._pixelTable[0].size();
	auto fillBits = (4 - width % 4) % 4;
	for (auto row = 0; row < height; row++)
	{
		for (auto col = 0; col < width; col++)
		{
			out << table._pixelTable[row][col]->getRed();
			out << table._pixelTable[row][col]->getGreen();
			out << table._pixelTable[row][col]->getBlue();
		}
		for (auto addBits = 0; addBits < fillBits; addBits++)
			out << 0;
	}
	return out;
}
