#pragma once
#include "Devise.h"

namespace Banque {
    class MAD : public Devise
    {
    public: 
        MAD(double val);
        void afficher() const override;
    private: 
        
    };
};

