#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Kilometers to Miles

// Specification of the class
class K_to_M
{
public:
	float cal(float k);
private:
	float m;
};

// Implementation of the class
float K_to_M::cal(float k) {
	m = k / 1.609;
	return m;
}

