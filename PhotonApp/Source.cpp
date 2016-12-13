#include  <iostream>
#include "bitmap.h"
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	bitmap image("img.bmp");

	image.save("new.bmp");

	return 0;
}
