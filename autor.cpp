#include <iostream>
#include <string>

using namespace std;

class Autor
{
private:
    string nombres;
    string apellidos;
    string fecha_nac;
    string nacionalidad;

public:
    Autor(string _nombres ="", string _apellidos="", string _fecha="")
    {
        nombres = _nombres;
        apellidos = _apellidos;
        fecha_nac = _fecha;
    }
    // getter an setter

    string getNombres()
    {
        return nombres;
    }

    void setNombres(string _nombres)
    {
        nombres = _nombres;
    }

    string getApellidos()
    {
        return apellidos;
    }

    void setApellidos(string _apellidos)
    {
        apellidos = _apellidos;
    }

    string getFecha_nac()
    {
        return fecha_nac;
    }

    void setFecha_nac(string _fecha_nac)
    {
        fecha_nac = _fecha_nac;
    }

    string getNacionalidad()
    {
        return nacionalidad;
    }

    void setNacionalidad(string _nacionalidad)
    {
        nacionalidad = _nacionalidad;
    }

    void imprimir()
    {
        cout << "Autor :" + nombres + ", " + apellidos + ", fecha de nacimiento: " + fecha_nac + ", nacionalidad: " + nacionalidad + "\n";
    }
};
