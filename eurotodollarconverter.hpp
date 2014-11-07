#pragma once
#include "currencyconverter.hpp"
class eurotodollarconverter :
	public currencyconverter
{
public:
	eurotodollarconverter();
	double convert(double inEuro);
	std::string toString() const;
	void print() const;
};


