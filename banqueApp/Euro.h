#pragma once
#include "Devise.h"
#include <iostream>
namespace Banque {
	class Euro : public Devise
	{
	public:
		Euro(double val); 
		void afficher() const override
		{
			this->Devise::afficher();
			std::cout << " Euro" << std::endl;
		}
	};
};
