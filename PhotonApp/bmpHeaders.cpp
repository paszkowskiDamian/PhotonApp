#include "bmpHeaders.h"

bmpHeaders::bmpHeaders()
{

}

bmpHeaders::bmpHeaders(std::vector<char> file)
{
	setHeaders(file);
}

bmpHeaders::~bmpHeaders()
{
}

void bmpHeaders::setHeaders(std::vector<char> file)
{
	for(auto i = 0; i < 14 ; i++)
	{
		_bmpFileHeader[i] = file[i];
	}
	for(auto i = 0 ; i < 40 ; i++)
	{
		_bmpInfoHeader[i] = file[i+14];
	}
	for(auto i = 0; i < 4 ; i++)
	{
	_fileSize += static_cast<unsigned char>(_bmpFileHeader[2+i]) << i * 8;
	_width += static_cast<unsigned  char>(_bmpInfoHeader[4+i]) << i * 8;
	_height += static_cast<unsigned char>(_bmpInfoHeader[8+i]) << i * 8;
	}
}

int bmpHeaders::getWidth() const
{
	return _width;
}

int bmpHeaders::getHeight() const
{
	return _height;
}

int bmpHeaders::getfileSize() const
{
	return _fileSize;
}

std::ostream& operator<<(std::ostream& out, const bmpHeaders& headers)
{
	out << headers._bmpFileHeader;
	out << headers._bmpInfoHeader;
	return out;
}

//use this when creating new images
//void bmpHeaders::setHeaders(int width, int height)
//{
//auto fileSize = 54 + 3 * width * height;
//for(auto i = 0; i < 4 ; i++)
//{
//_bmpFileHeader[2 + i] = static_cast<unsigned char>(fileSize >> i * 8);
//_bmpInfoHeader[4 + i] = static_cast<unsigned char>(width >> i*8);
//_bmpInfoHeader[8 + i] = static_cast<unsigned char>(height >> i * 8);
//}
//}
//
//
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
