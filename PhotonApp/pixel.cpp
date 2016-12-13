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

unsigned char pixel::getRed() const
{
	return static_cast<unsigned char>(_red);
}

unsigned char pixel::getGreen() const
{
	return static_cast<unsigned char>(_green);
}

unsigned char pixel::getBlue() const
{
	return static_cast<unsigned char>(_blue);
}
