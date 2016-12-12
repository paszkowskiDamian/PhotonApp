#pragma once
#include <fstream>
#include <vector>

class image
{
	std::string _filename;
	int _width = 0;
	int _height = 0;

protected:
	std::vector<char> _fileContent() const;

public:
	image(std::string);
	//virtual void load() = 0;
	//virtual void save() = 0;
	virtual ~image();
};

