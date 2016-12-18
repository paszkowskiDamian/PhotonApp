#include "pixel.h"


pixel::pixel(int red, int green, int blue)
{
	red > 255 ? _red = 255 : _red = red;
	green > 255 ? _green = 255 : _green = green;
	blue > 255 ? _blue = 255 : _blue = blue;
}

pixel::~pixel()
{
}

int pixel::getRed() const
{
	return static_cast<int>(_red);
}

int pixel::getGreen() const
{
	return static_cast<int>(_green);
}

int pixel::getBlue() const
{
	return static_cast<int>(_blue);
}
