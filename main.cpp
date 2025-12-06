#include <iostream>
#include "suma.h"
#include "FibbInCPP.h"
#include "Iloraz.h"
#include "minus.h"

using namespace std;

int main(){
    int a = 3;
    int b = 4;
    int c;
    c = suma(a,b);
    
    std::cout << "\n" << c;
    
    c = minus1(a,b);
    std::cout << "\n" << c << endl;
   
    Fibb();
    cout << "\n";
    float x,y=3,z=4;
    x = iloraz(y,z);
    cout << x << " " << endl;

    return 0;
}
