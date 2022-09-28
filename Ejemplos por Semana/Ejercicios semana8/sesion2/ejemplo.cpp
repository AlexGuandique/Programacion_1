#include <iostream>

using namespace std;

struct alumno //tipo de dato alumno
{
    int edad;
    string nombre;
    string numeroCarnet;
    string direccion;
    string carrera;
};

int main()
{
    const int n = 1;
    alumno arregloAlumno[n]; //arreglo de tipo Estructura
    int edadAlumnoEspecifico;

    for (int i = 0; i < n; i++) //0,1
    {
        cout << "Ingrese la Edad del Alumno" << endl;
        cin >> arregloAlumno[i].edad;
        cout << "Ingrese el Nombre del Alumno" << endl;
        cin.ignore();
        getline(cin, arregloAlumno[i].nombre, '\n');
        cout << "Ingrese el Numero de Carnet del Alumno" << endl;
        getline(cin, arregloAlumno[i].numeroCarnet, '\n');
        cout << "Ingrese la Direccion del Alumno" << endl;
        getline(cin, arregloAlumno[i].direccion, '\n');
        cout << "Ingrese Nombre de la Carrera del Alumno" << endl;
        getline(cin, arregloAlumno[i].carrera, '\n');
    }

    cout<< "Edad a buscar: "<<endl;
    cin>>edadAlumnoEspecifico;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        if (arregloAlumno[i].edad == edadAlumnoEspecifico)
        {
            cout << "Nombre del Registro Encontrado > " << arregloAlumno[i].nombre << endl;
        }
    }
    return 0;
} 
