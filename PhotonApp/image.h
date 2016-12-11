#pragma once
#include <fstream>

class image
{
public:
	image();
	virtual void load() = 0;
	virtual void save() = 0;
	virtual ~image();
};

