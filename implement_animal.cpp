#include <iostream>
#include <string>

// incluimos la clase animal
#include "animal.cpp"

using namespace std;

int main()
{
    Animal ani_01(1, "Canino", "Mamifero");
    Animal ani_02(2, "Felino", "Mamifero");

    Animal ani_03(3, "Accipítridos", "Aves");
    Animal ani_04(4, "Titónidos", "Aves");


    Animal animales[4] = {ani_01, ani_03, ani_02, ani_04};

    for(int i =0 ; i<4; i++){
        animales[i].imprimir();
    }

    return 0;
}