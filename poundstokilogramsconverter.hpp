#pragma once
#include "weightconverter.hpp"
class poundstokilogramsconverter :
	public weightconverter
{
public:
	poundstokilogramsconverter();
	double convert(double inPounds);
	std::string toString() const;
	void print() const;
};

