#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Centigrade to Fahrenheit

// Specification of the class
class C_to_F
{
public:
	float cal(float c);
private:
	float f;
};

float C_to_F::cal(float c) {
	f = (c  * 9 / 5) + 32;
	return f;
}
