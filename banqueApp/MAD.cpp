#include "MAD.h"
#include <iostream>

Banque::MAD::MAD(double val):Devise(val)
{
	this->conversionTable[0] = 1; 
	this->conversionTable[1] = 0.11; 
	this->conversionTable[2] = 0.095;
}

void Banque::MAD::afficher() const
{
	this->Devise::afficher(); 
	std::cout << " MAD" << std::endl; 
}

