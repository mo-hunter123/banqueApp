#include "Euro.h"
#include "Dollar.h"

Banque::Euro::Euro(double val):Devise(val)
{
	this->conversionTable[0] = 10.88; 
	this->conversionTable[1] = 1.13; 
	this->conversionTable[2] = 1; 
}
