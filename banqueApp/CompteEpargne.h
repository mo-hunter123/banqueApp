#pragma once

#include "Compte.h"
using namespace std; 
namespace Banque {
	class Client; 
	class Devise; 


	class CompteEpargne : public Compte
	{
	private:
		double TauxInterets;
	public:
		CompteEpargne(Client* titu, Devise* sol, double t);
		void calculInteret(); 
	};
};
