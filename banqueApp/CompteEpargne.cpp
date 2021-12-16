#include "CompteEpargne.h"
#include <assert.h>

using namespace Banque; 
using namespace std; 


Banque::CompteEpargne::CompteEpargne(Client* titu, Devise* sol, double t):Compte(titu, sol)
{
	assert(0 <= t && t <= 100); 
	this->TauxInterets = t; 

}

void Banque::CompteEpargne::calculInteret()
{
	double a = this->TauxInterets / 100;
	this->crediter(&(this->pourcentage(a))); 

}
