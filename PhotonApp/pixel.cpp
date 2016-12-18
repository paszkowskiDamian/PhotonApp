#include "pixel.h"


pixel::pixel(int red, int green, int blue)
{
	setPixel(red, green, blue);
}

pixel::~pixel()
{
}

int pixel::getRed() const
{
	return _red;
}

int pixel::getGreen() const
{
	return _green;
}

int pixel::getBlue() const
{
	return _blue;
}

void pixel::setPixel(int red, int green, int blue)
{
	red > 255 ? _red = 255 : _red = red;
	green > 255 ? _green = 255 : _green = green;
	blue > 255 ? _blue = 255 : _blue = blue;
}
