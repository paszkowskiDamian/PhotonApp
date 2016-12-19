#pragma once
#include <ostream>
#include <iostream>
#include <vector>

class bmpHeaders
{
	char _bmpFileHeader[14] = {'B','M', 0,0,0,0, 0,0, 0,0, 54,0,0,0 };
	char _bmpInfoHeader[40] = { 40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0, 24,0 };
	int _width = 0;
	int _height = 0;
	int _fileSize = 0;

public:
	bmpHeaders();
	bmpHeaders(std::vector<char>);
	~bmpHeaders();

	void setHeaders(std::vector<char>);
	int getWidth() const;
	int getHeight() const;
	int getfileSize() const;
	friend std::ostream& operator<< (std::ostream &out, const bmpHeaders &headers);
	//friend std::istream& operator >> (std::istream &in, bmpHeaders &headers);
	//void setHeaders(int w, int h);
};

