#include "milestokilometerconverter.hpp"


milestokilometerconverter::milestokilometerconverter()
{
}

/*In: double value of miles
*Out: kilometer value of input miles
*/
double milestokilometerconverter::convert(double inMiles){
	return inMiles * 1.609344;
}

std::string milestokilometerconverter::toString() const{
	return "Miles to Kilometer Converter";
}

void milestokilometerconverter::print() const{
	std::cout << this->toString();
}
