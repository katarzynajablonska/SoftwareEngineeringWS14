#include "poundstokilogramsconverter.hpp"


poundstokilogramsconverter::poundstokilogramsconverter()
{
}


/*In: double value of pounds
*Out: kilograms value of input pounds
*/
double poundstokilogramsconverter::convert(double inPounds){
	return inPounds * 0.45359237;
}

std::string poundstokilogramsconverter::toString() const{
	return "Pounds to Kilogram Converter";
}

void poundstokilogramsconverter::print() const{
	std::cout << this->toString();
}

