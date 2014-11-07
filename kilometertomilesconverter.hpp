#pragma once
#include "lengthconverter.hpp"
class kilometertomilesconverter :
	public lengthconverter
{
public:
	kilometertomilesconverter();
	double convert(double inKilometer);
	std::string toString() const;
	void print() const;
};

