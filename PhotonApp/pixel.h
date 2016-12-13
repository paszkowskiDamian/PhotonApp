#pragma once
class pixel
{
	int _red;
	int _green;
	int _blue;

public:
	pixel(int, int, int);
	~pixel();

	unsigned char getRed() const;
	unsigned char getGreen() const;
	unsigned char getBlue() const;

};

