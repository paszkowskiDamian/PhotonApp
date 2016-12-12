#include "bitmap.h"



bitmap::bitmap(std::string filename) : image(filename)
{
	_headers = new bmpHeaders;
	auto fileContent = _fileContent();
	
	

}


bitmap::~bitmap()
{
}
