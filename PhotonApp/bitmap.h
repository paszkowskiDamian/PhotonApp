#pragma once
#include "image.h"
#include "bmpHeaders.h"
#include <fstream>
#include <vector>

class bitmap :
	public image
{
	bmpHeaders *_headers;

public:
	bitmap(std::string filename);
	//bitmap(int,int); //create new image
	//void save();
	~bitmap();
};

