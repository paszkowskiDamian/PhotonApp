#pragma once
#include <ostream>
#include <iostream>
#include <vector>

class bmpHeaders
{
	unsigned char _bmpFileHeader[14] = {'B','M', 0,0,0,0, 0,0, 0,0, 54,0,0,0 };
	unsigned char _bmpInfoHeader[40] = { 40,0,0,0, 0,0,0,0, 0,0,0,0, 1,0, 24,0 };

public:
	friend std::ostream& operator<< (std::ostream &out, const bmpHeaders &headers);
	//friend std::istream& operator >> (std::istream &in, bmpHeaders &headers);

	void setHeaders(int w, int h);
	void setHeaders(std::vector<char>);

	bmpHeaders();
	~bmpHeaders();
};

