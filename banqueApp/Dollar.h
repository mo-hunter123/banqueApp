#pragma once
#include "Devise.h"
#include <iostream>
namespace Banque {
	class Dollar : public Devise
	{
	public : 
		Dollar(double Val); 
		void afficher() const override
		{
			this->Devise::afficher();
			std::cout << " Dollar" << std::endl;
		}
	};
};

