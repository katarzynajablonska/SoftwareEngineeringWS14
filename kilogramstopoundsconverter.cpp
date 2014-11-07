#include "kilogramstopoundsconverter.hpp"


kilogramstopoundsconverter::kilogramstopoundsconverter()
{
}


/*In: double value of kilograms
*Out: pounds value of input kilograms
*/
double kilogramstopoundsconverter::convert(double inKilograms){
	return inKilograms*2.20462262;
}

std::string kilogramstopoundsconverter::toString() const{
	return "Kilograms to Pounds Converter";
}

void kilogramstopoundsconverter::print() const{
	std::cout << this->toString();
}
