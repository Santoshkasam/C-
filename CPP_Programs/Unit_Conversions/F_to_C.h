#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Fahrenheit to Centigrade

// Specification of the class
class F_to_C 
{
public:
	float cal(float f);
private:
	float c;
};

// Implementation of the class
float F_to_C::cal(float f) {
	c = (f - 32) * (5 / 9);
	return c;
}
