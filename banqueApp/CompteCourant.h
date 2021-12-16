#pragma once
#include "Compte.h"

namespace Banque {
	class Compte; 
	class Devise; 
	class CompteCourant : public Compte
	{
	private: 
		Devise* decouverte; 
	public: 
		CompteCourant(Client*, Devise*, Devise*); 
		bool debiter(Devise* M) override;
	};
};

