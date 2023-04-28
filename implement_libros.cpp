
#include <iostream>
#include <string>
#include "libro.cpp"

using namespace std;

int main()
{
    Autor autor1("Junito", "Perez", "15/05/1800");
    Autor autor2("Julio", "Gonzales", "15/05/1800");

    Libro libro1("programacion basica", "ingenieria", 2023, "UNAS", autor1);
    Libro libro2("Aventurasd", "Infantil", 2022, "UNAS", autor2);
    Libro libro3("Como sobrevivir al covid", "Economia", 2021, "UNAS", autor2);
    Libro libro4("Eduacando", "Familia", 2015, "UNAS", autor1);
    Libro libro5("Autoayuda", "psicologia", 2018, "UNAS", autor1);

    Libro lista_libro[5] = {libro5, libro2, libro4, libro1, libro3};

    for (int i = 0; i < 5; i++)
    {
        lista_libro[i].imprimir();
    }

    // cambiar el autor del libro 2023 para julio
    for (int i = 0; i < 5; i++)
    {
        if (lista_libro[i].getAño_pulicacion() == 2023)
        {
            lista_libro[i].setAutor(autor2);
        }
    }

    cout << "-------------------------------------------\n";
    // libros de juanito
    for (int i = 0; i < 5; i++)
    {
        if (lista_libro[i].getAutor().getNombres() == "Junito")
        {
            lista_libro[i].imprimir();
        }
    }
    cout << "-------------------------------------------\n";

    // libros de Julio
    for (int i = 0; i < 5; i++)
    {
        if (lista_libro[i].getAutor().getNombres() == "Julio")
        {
            lista_libro[i].imprimir();
        }
    }

    return 0;
}