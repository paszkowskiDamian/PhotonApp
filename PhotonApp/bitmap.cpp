#include "bitmap.h"



bitmap::bitmap()
{
	headers = new bmpHeaders;
}

void bitmap::load(std::string filename)
{
	std::ifstream bitMap(filename, std::ios::in | std::ios::binary | std::ios::ate);

	if (!bitMap.is_open()) throw "DODAJ EXCEPTIONY!";

	bitMap >> *headers;

	bitMap.close();
}

bitmap::~bitmap()
{
}
