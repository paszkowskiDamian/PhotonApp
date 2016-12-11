#include  <iostream>
#include "bitmap.h"

int main(int argc, char* argv[])
{
	std::string filename = "img.bmp";
	bitmap bmp;
	try
	{
		bmp.load(filename);

	}
	catch( ... )
	{
		std::cout <<  "Error";
	}
	

	return 0;
}
