#pragma once
class pixel
{
	int _red;
	int _green;
	int _blue;

public:
	pixel(int, int, int);
	~pixel();

	int getRed() const;
	int getGreen() const;
	int getBlue() const;

	void setPixel(int,int,int);
};

