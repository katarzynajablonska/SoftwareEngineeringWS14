#include "kilometertomilesconverter.hpp"


kilometertomilesconverter::kilometertomilesconverter()
{
}

/*In: double value of kilometer
*Out: miles value of input kilometer
*/
double kilometertomilesconverter::convert(double inKilometer){
	return inKilometer * 0.621371192;
}

std::string kilometertomilesconverter::toString() const{
	return "Kilometer to Miles Converter";
}

void kilometertomilesconverter::print() const{
	std::cout << this->toString();
}
