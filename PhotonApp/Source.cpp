#include  <iostream>
#include "bitmap.h"
#include <vector>
#include <fstream>
#include "bmpHeaders.h"


using namespace std;

int main(int argc, char* argv[])
{
	try
	{
		bitmap image("C:\\Users\\damia\\OneDrive\\Makro II\\CP\\Projects\\bitmap\\bitmap\\img.bmp");

		image.save("C:\\Users\\damia\\Desktop\\new.bmp");

	}
	catch(exception& e)
	{
		std::cout << e.what();
	}
	
	//ifstream file("img.bmp",ios::binary | ios::ate | ios::in);
	//ofstream copy("copy1.bmp", ios::binary | ios::out);

	//if(file.is_open())
	//{
	//	vector<char> content;
	//	content.resize(file.tellg());
	//	file.seekg(0, ios::beg);
	//	char bit = 0;
	//	int i = 0;

	//	while (file.get(bit))
	//	{
	//		content[i] = bit;
	//		i++;
	//	}

	//	file.close();

	//	if(copy.is_open())
	//	{
	//		for(auto i = 0 ; i < 55 ; i++)
	//		{
	//			copy << content[i];
	//		}
	//		//bmpHeaders headers(content);

	//		//copy << headers;



	//		for(auto i = 55 ; i < content.size() ; i++)
	//		{
	//			int val = static_cast<int>(content[i]);
	//			val > 255 ? val = 255 : val = val;
	//			val < 0 ? val = 0 : val = val;
	//			copy << static_cast<char>(val);
	//		}
	//		copy.close();
	//	}

	//}


	return 0;
}
