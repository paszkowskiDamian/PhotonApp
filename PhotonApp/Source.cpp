#include  <iostream>
#include "bitmap.h"
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	bitmap image("img.bmp");

	/*vector<char> fileContents;
	

	ifstream file("img.bmp", ios::in | ios::binary | ios::ate);
	if (!file.is_open())
		throw runtime_error("oppen fail");
	fileContents.resize(file.tellg());

	file.seekg(0, ios::beg);

	if (!file.read(&fileContents[0], fileContents.size()))
		throw runtime_error("read fail");

	ofstream myfile("copy.bmp", ios::out | ios::app | ios::binary);

	if (!myfile.is_open())
		throw runtime_error("copy file open fail");
	
	for(unsigned i = 0 ; i != fileContents.size(); i++)
	{
		myfile << fileContents[i];
	}*/

	return 0;
}
