#include "bitmap.h"



bitmap::bitmap()
{
	headers = new bmpHeaders;
}

void bitmap::load(std::string filename)
{
	std::ifstream bitMap;
	bitMap.open(filename, 'wb');

	if (!bitMap) throw "DODAJ EXCEPTIONY!";

	bitMap >> *headers;

	bitMap.close();
}

bitmap::~bitmap()
{
}
