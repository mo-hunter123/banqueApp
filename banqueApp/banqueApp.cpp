
#include <iostream>
#include"Client.h"
#include "CompteEpargne.h"
#include "CompteCourant.h"
#include "Devise.h"
#include "Dollar.h"
#include "Euro.h" 
#include "MAD.h"

using namespace std;
using namespace Banque;
int main()
{
    Client *c1=new Client("user1", "user1", "adduser1");
    MAD* s1 = new MAD(20000);
    Devise* s2 = new MAD(100);
    Devise* s3 = new MAD(40);
    
    CompteEpargne* cE = new CompteEpargne(c1, s1, 10); 
    cE->debiter(s2);
    cE->crediter(s3);

    cE->showOperations(); 

    Euro* d1 = s1->convertToEuro(); 
    cout << "\n---------------\n" << endl;
    d1->afficher(); 
    
}
    