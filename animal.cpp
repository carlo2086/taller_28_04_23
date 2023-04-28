#include <iostream>
#include <string>

using namespace std;

class Animal
{
    // atributos
    //  private, protected
private:
    int codigo;
    string nombre;
    string familia;
    // metodos
public:
    Animal(int _id, string _nombre, string _familia)
    {
        codigo = _id;
        nombre = _nombre;
        familia = _familia;
    }
    // metodos para manipular los datos
    // getter es para obtener, setter es para actualizar
    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getFamilia()
    {
        return familia;
    }
    void setFamilia(string _familia)
    {
        familia = _familia;
    }

    string getDatos()
    {
        return "Codigo: " + to_string(codigo) + ",  Familia de la especie: " + familia + ", Especie: " + nombre;
    }

    void imprimir()
    {
        cout << "Codigo: " + to_string(codigo) + ",  Familia de la especie: " + familia + ", Especie: " + nombre + "\n";
    }
};