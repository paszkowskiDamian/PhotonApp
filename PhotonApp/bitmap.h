#pragma once
#include "image.h"
#include "bmpHeaders.h"

class bitmap :
	public image
{
	bmpHeaders* headers;

public:
	bitmap();
	void load();
	void save();
	virtual ~bitmap();
};
