#include "Operation.h"
#include "Compte.h"
#include "Devise.h"
#include "Date.h"
using namespace Banque; 

using namespace std; 
int Operation::num = 0; 

Banque::Operation::Operation(Devise* Montant, Compte* C):numOperation(++num)
{
	this->Montant = Montant; 
	this->C = C; 
	this->OpDate = new Date(); 
}

void Banque::Operation::showDateNum() const
{
	this->OpDate->ShowDate(); 
	cout << "\nMontant: ";
	this->Montant->afficher();
	cout << "\n"; 
	cout << "Num Operation: " << this->num << endl;
	//this->C->consulter(); 
}
