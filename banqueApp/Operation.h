#pragma once

#include <iostream>
#include "Date.h"

using namespace std;
//declaration en naval 
// meme s'il y a un 
// pour eviter l'appelle cyclique 

namespace Banque {
	class Devise;
	class Compte;
	class Operation
	{
	private: 
		const int numOperation; 
		static int num; 
		Devise* Montant; 
		Date* OpDate; // utiliser la date dans banqueAdvanced
		Compte* C; 
	public: 
		// une operation sera cree a l'interieur de chaque transaction 
		Operation(Devise* Montant, Compte* C); 
		void showDateNum() const;
		virtual void showOperation() const = 0; 
	};
};
