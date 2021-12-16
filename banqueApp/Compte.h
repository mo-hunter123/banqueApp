#pragma once
#include<vector>

#include "GC.h"
using namespace std; 
namespace Banque {
	class Devise; 
	class Client; 
	class Operation; 
	class Compte
	{
		//attributs
	private:
		const int numcompte;
		static int count;
		Client* titulaire;
		Devise* solde;
		static Devise* plafond;
		vector <Operation*> listOperations; 
		GC* ref;
		// Methodes
	public : 
		Compte(Client*, Devise*); // avec parametres
		Compte(const Compte&);
		void crediter(Devise*M); 
		virtual bool debiter(Devise*M); 
		bool verser(Devise* M, Compte& C);
		void consulter()const;
		void showOperations() const;
		~Compte();
	protected: 
		Devise& pourcentage(double a) const;
		bool checkSup(Devise *S) const;
		void ajouterOpera(Operation* op); 

	};

};