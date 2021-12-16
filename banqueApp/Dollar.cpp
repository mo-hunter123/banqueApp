#include "Dollar.h"

Banque::Dollar::Dollar(double Val):Devise(Val)
{
	this->conversionTable[0] = 9.26; 
	this->conversionTable[1] = 1; 
	this->conversionTable[2] = 0.88; 
}
