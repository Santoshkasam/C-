#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Euros to Dollers

// Specification of the class
class EU_to_US
{
public:
	float cal(float eu);
private:
	float us;
};

// Implementation of the class
float EU_to_US::cal(float eu) {
	us = eu / 0.85;
	return us;
}
