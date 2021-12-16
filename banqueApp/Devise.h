#pragma once

namespace Banque {
	class Euro; 
	class Dollar; 
	class MAD; 
	class Devise
	{
	private:
		double valeur;
	protected: double conversionTable[3]; 
	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		float operator[](int index) const; 
		virtual void afficher() const;
		MAD* convertToMad();
		Dollar* convertToDollar();
		Euro* convertToEuro();
		
	};
};
