#pragma once
#include <string>
#include "Operation.h"
using namespace std; 

namespace Banque {
    class Devise;
    class Compte;
    class OperationV : public Operation
    {
    private:
        static string libelle; 

    public: 
        OperationV(Devise* Montant, Compte* C); 
        void showOperation() const override; 
    };
};
