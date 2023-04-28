#include <iostream>
#include <string>
#include "autor.cpp"

using namespace std;

class Libro
{
private:
    /* data */
    string titulo;
    string clasificacion;
    int año_pulicacion;
    Autor autor;
    string editorial;

public:
    Libro(string _titulo, string _clasificacion, int año, string _editorial, Autor _autor)
    {
        titulo = _titulo;
        clasificacion = _clasificacion;
        año_pulicacion = año;
        editorial = _editorial;
        autor = _autor;
    }

    // implementando los getter an setter
    string getTitulo()
    {
        return titulo;
    }

    void setTitulo(string _titulo)
    {
        titulo = _titulo;
    }

    string getClasificacion()
    {
        return clasificacion;
    }

    void setClasificacion(string _clasificacion)
    {
        clasificacion = _clasificacion;
    }

    int getAño_pulicacion()
    {
        return año_pulicacion;
    }

    void setAño_pulicacion(int _año_pulicacion)
    {
        año_pulicacion = _año_pulicacion;
    }

    Autor getAutor()
    {
        return autor;
    }

    void setAutor(Autor _autor)
    {
        autor = _autor;
    }

    string getEditorial()
    {
        return editorial;
    }

    void setEditorial(string _editorial)
    {
        editorial = _editorial;
    }

    // imprimiento
    void imprimir()
    {
        cout << "Libro: " + titulo + ", genero :" + clasificacion + ", año: " + to_string(año_pulicacion) + ", autor: " + autor.getApellidos() + " " + autor.getNombres() + "\n";
    }
};
