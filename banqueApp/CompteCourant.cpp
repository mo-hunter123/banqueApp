#include "CompteCourant.h"
#include <assert.h>
#include "Compte.h"

#include "Devise.h" 

using namespace Banque; 
using namespace std; 

Banque::CompteCourant::CompteCourant(Client* titu, Devise* Solde, Devise* Deco):Compte(titu, Solde)
{
	assert(*Solde >= *Deco); 
	this->decouverte = Deco; 
}

bool Banque::CompteCourant::debiter(Devise* M)
{
	
	if (this->checkSup(&(*M + *(this->decouverte))))
		return this->Compte::debiter(M); 
	return false;
}
