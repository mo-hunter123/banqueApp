#include "Devise.h"
#include  <iostream>
#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"

using namespace std;
using namespace Banque;

enum MyEnum
{
	MADINDEX,
	DOLLARINDEX, 
	EUROINDEX
};

Devise::Devise(double val)
{
	this->valeur = val;
	this->conversionTable[0] = 0;
	this->conversionTable[1] = 0;
	this->conversionTable[2] = 0;
}

Devise& Devise::operator+(const Devise& M) const
{
	Devise* res = new Devise (this->valeur + M.valeur); 
	return *res;
}

Devise& Devise::operator-(const Devise& M) const
{
	Devise* res = new Devise(this->valeur - M.valeur);
	return *res;
}

Devise& Banque::Devise::operator*(const Devise& M) const
{
	Devise* res = new Devise(this->valeur * M.valeur);
	return *res;
}

bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

void Devise::afficher() const
{
	cout << "le solde est : " << this->valeur << " ";
}

MAD* Banque::Devise::convertToMad()
{
	return new MAD(this->valeur*this->conversionTable[0]);
}

Dollar* Banque::Devise::convertToDollar()
{
	return new Dollar(this->valeur * this->conversionTable[1]);
}

Euro* Banque::Devise::convertToEuro()
{
	return new Euro(this->valeur * this->conversionTable[2]);
}
