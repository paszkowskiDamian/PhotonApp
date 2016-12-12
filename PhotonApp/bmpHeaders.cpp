#include "bmpHeaders.h"

bmpHeaders::bmpHeaders()
{
}

bmpHeaders::~bmpHeaders()
{
}

/*
void bmpHeaders::setHeaders(int width, int height)
{
	auto fileSize = 54 + 3 * width * height;
	for(auto i = 0; i < 4 ; i++)
	{
		_bmpFileHeader[2 + i] = static_cast<unsigned char>(fileSize >> i * 8);
		_bmpInfoHeader[4 + i] = static_cast<unsigned char>(width >> i*8);
		_bmpInfoHeader[8 + i] = static_cast<unsigned char>(height >> i * 8);
	}
}
*/

void bmpHeaders::setHeaders(std::vector<char> file)
{
	for(auto i = 0; i < 14 ; i++)
	{
		_bmpFileHeader[i] = file[i];
	}
	for(auto i = 0 ; i < 40 ; i++)
	{
		_bmpInfoHeader[i] = file[i];
	}

}

std::ostream& operator<<(std::ostream& out, const bmpHeaders& headers)
{
	out << headers._bmpFileHeader;
	out << headers._bmpInfoHeader;
	return out;
}

//std::istream& operator>>(std::istream& in, bmpHeaders& headers)
//{
//	char fileBuffer[14];
//	char infoBuffer[40];
//
//	in.read(fileBuffer,14);
//	in.read(infoBuffer, 40);
//
//	*headers._bmpFileHeader = *fileBuffer;
//	*headers._bmpInfoHeader = *infoBuffer;
//
//	return in;
//}
