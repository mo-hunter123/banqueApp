#include "OperationR.h"
#include "Compte.h"
#include "Devise.h"

using namespace Banque; 
using namespace std; 

string Banque::OperationR::libelle = string("-"); 

Banque::OperationR::OperationR(Devise* d, Compte* C):Operation(d, C)
{
}

void Banque::OperationR::showOperation() const
{
	cout << "Operation Retrait: " << endl;
	this->showDateNum();
	cout << "----------------" << endl;
}
