#include "bitmap.h"



bitmap::bitmap(std::string filename) : image(filename)
{
	auto fileContent = _fileContent();
	_headers = new bmpHeaders(fileContent);

}


bitmap::~bitmap()
{
	delete _headers;
}
