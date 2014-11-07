#include "eurotodollarconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "kilogramstopoundsconverter.hpp"
#include "poundstokilogramsconverter.hpp"
#include "kilometertomilesconverter.hpp"
#include "milestokilometerconverter.hpp"

int main(int argc, char* argv[])
{
	std::string conversion = argv[0];
	std::string value = argv[1];

	/*
	 * TODO
	 *
	 * use desired conversion here
	 *
	 */

	if (conversion != ""){
		if (conversion == "euro2dollar"){
			eurotodollarconverter c;
			std::cout << c.toString() << " has converted " << value << " euro to " << c.convert(std::stod(value)) << " dollar!" << std::endl;
		}
		else if (conversion == "dollar2euro"){
			dollartoeuroconverter c;
			std::cout << c.toString() << " has converted " << value << " dollar to " << c.convert(std::stod(value)) << " euro!" << std::endl;
		}
		else if (conversion == "kigr2pond"){
			kilogramstopoundsconverter c;
			std::cout << c.toString() << " has converted " << value << " kilogram to " << c.convert(std::stod(value)) << " pounds!" << std::endl;
		}
		else if (conversion == "pond2kigr"){
			poundstokilogramsconverter c;
			std::cout << c.toString() << " has converted " << value << " pounds to " << c.convert(std::stod(value)) << " kilograms!" << std::endl;
		}
		else if (conversion == "kime2mile"){
			kilometertomilesconverter c;
			std::cout << c.toString() << " has converted " << value << " kilometers to " << c.convert(std::stod(value)) << " miles!" << std::endl;
		}
		else if (conversion == "mile2kilme"){
			milestokilometerconverter c;
			std::cout << c.toString() << " has converted " << value << " miles to " << c.convert(std::stod(value)) << " kilometers!" << std::endl;
		}




		return 0;
	}
}
