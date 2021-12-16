
#include "OperationV.h"
#include "Compte.h"
#include "Devise.h"


using namespace Banque;
using namespace std;

string Banque::OperationV::libelle = string("+");
Banque::OperationV::OperationV(Devise* Montant, Compte* C):Operation(Montant, C)	
{
}

void Banque::OperationV::showOperation() const
{
	cout << "Operation Virement: " << endl; 
	this->showDateNum(); 
	cout << "----------------" << endl; 
}
