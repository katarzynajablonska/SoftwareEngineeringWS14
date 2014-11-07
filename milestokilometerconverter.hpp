#pragma once
#include "lengthconverter.hpp"
class milestokilometerconverter :
	public lengthconverter
{
public:
	milestokilometerconverter();
	double convert(double inKilometer);
	std::string toString() const;
	void print() const;
};

