#pragma once
#include "Operation.h"
#include <string>

using namespace std; 

namespace Banque {
	class Devise; 
	class Compte; 
	class OperationR : public Operation
	{
	private: 
		// il faut determiner le libelle en .cpp comme
		// etant un retrait 
		static string libelle;
	public : 
		OperationR(Devise* d, Compte* C); 
		void showOperation() const; 
	};
}; 

