#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Class to convert Dollers to Euros

// Specification of the class
class US_to_EU
{
public:
	float cal(float us);
private:
	float eu;
};

// Implementation of the class
float US_to_EU::cal(float us) {
	eu = (us * 0.85);
	return eu;
}

