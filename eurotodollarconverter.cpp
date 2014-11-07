#include "eurotodollarconverter.hpp"


eurotodollarconverter::eurotodollarconverter()
{
}

/*In: double value of euro
*Out: Dollar value of input Europs as of 07.11.14
*/
double eurotodollarconverter::convert(double inEuro){
	return inEuro*1.240405;
}

std::string eurotodollarconverter::toString() const{
	return "Euro to Dollar Converter";
}

void eurotodollarconverter::print() const{
	std::cout << this->toString();
}
