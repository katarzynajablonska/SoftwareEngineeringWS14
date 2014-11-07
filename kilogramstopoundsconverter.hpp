#pragma once
#include "weightconverter.hpp"
class kilogramstopoundsconverter :
	public weightconverter
{
public:
	kilogramstopoundsconverter();
	double convert(double inkilograms);
	std::string toString() const;
	void print() const;
};

