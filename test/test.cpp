#define TEST_CPP

#include "tinytest.h"
#include "eurotodollarconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "kilogramstopoundsconverter.hpp"
#include "poundstokilogramsconverter.hpp"
#include "kilometertomilesconverter.hpp"
#include "milestokilometerconverter.hpp"


int TestEuroToDollar(){
	eurotodollarconverter c;
	TINYTEST_EQUAL_EPSILON(1.23857, c.convert(1));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-1.23857, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(28.7772, c.convert(23.2342));
	return 0;
}

int TestDollarToEuro(){
	dollartoeuroconverter c;
	TINYTEST_EQUAL_EPSILON(0.80738, c.convert(1.0));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-0.80738, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(18.7589, c.convert(23.2342));
	return 0;
}

int TestKilometerToMiles(){
	kilometertomilesconverter c;
	TINYTEST_EQUAL_EPSILON(0.6213, c.convert(1.0));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-0.62137, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(14.4370, c.convert(23.2342));
	return 0;
}

int TestMilesToKilometer(){
	dollartoeuroconverter c;
	TINYTEST_EQUAL_EPSILON(0.621371, c.convert(1.0));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-0.621371, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(37.3918759, c.convert(23.2342));
	return 0;
}

int TestKilogramsToPounds(){
	kilogramstopoundsconverter c;
	TINYTEST_EQUAL_EPSILON(2.20462, c.convert(1.0));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-2.20462, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(51.2227, c.convert(23.2342));
	return 0;
}

int TestPoundsToKilograms(){
	poundstokilogramsconverter c;
	TINYTEST_EQUAL_EPSILON(0.45359, c.convert(1));
	TINYTEST_EQUAL_EPSILON(0.0, c.convert(0.0));
	TINYTEST_EQUAL_EPSILON(-0.45359, c.convert(-1.0));
	TINYTEST_EQUAL_EPSILON(10.53887, c.convert(23.2342));
	return 0;
}




TINYTEST_START_SUITE(SingleSuite);
TINYTEST_ADD_TEST(TestEuroToDollar);
TINYTEST_ADD_TEST(TestDollarToEuro);
TINYTEST_ADD_TEST(TestKilometerToMiles);
TINYTEST_ADD_TEST(TestMilesToKilometer);


TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(SingleSuite);