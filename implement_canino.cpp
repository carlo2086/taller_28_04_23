#include <iostream>
#include <string>

// incluimos la clase animal
#include "canino.cpp"

using namespace std;

int main()
{
    Canino can1(4, "Perro", 1, "Canino", "Mamifero");
    Canino can2(4, "Lobo", 1, "Canino", "Mamifero");
    Canino can3(4, "Perro", 1, "Canino", "Mamifero");

    Canino canes[3] = {can1, can2, can3};

    for (int i = 0; i < 3; i++)
    {
        canes[i].imprimir();
    }
    string nombre_can, color;
    for (int i = 0; i < 3; i++)
    {
        nombre_can = "";
        color = "";
        cout << "Ingrese el nombre del can \n";
        cin >> nombre_can;
        canes[i].setNombre_canino(nombre_can);
        cout << "Ingrese el color del can \n";
        cin >> color;
        canes[i].setPelaje_color(color);
    }

    for (int i = 0; i < 3; i++)
    {
        canes[i].imprimir();
    }

    cout<<"*****************";
    // clasificar
    // imprimir los del tipo perro
    for (int i = 0; i < 3; i++)
    {
        if (canes[i].getTipo() == "Perro")
        {
            canes[i].imprimir();
        }
    }
    // imprimir los del tipo lobo
    for (int i = 0; i < 3; i++)
    {
        if (canes[i].getTipo() == "Lobo")
        {
            canes[i].imprimir();
        }
    }
    
    return 0;
}