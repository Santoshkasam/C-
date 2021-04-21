#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Miles to Kilometers

// Specification of the class
class M_to_K
{
public:
	float cal(float m);
private:
	float k;
};

// Implementation of the class
float M_to_K::cal (float m) {
	k = m * 1.609;
	return k;
}
