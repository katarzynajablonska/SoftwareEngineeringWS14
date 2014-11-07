#include "dollartoeuroconverter.hpp"

#include <string>

dollartoeuroconverter::dollartoeuroconverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 19.10.14
 */
double dollartoeuroconverter::convert(double inDollars){
  return inDollars*0.78224;
}

std::string dollartoeuroconverter::toString() const{
  return "Dollar to Euro Converter";
}

void dollartoeuroconverter::print() const{
  std::cout<<this->toString();
}
