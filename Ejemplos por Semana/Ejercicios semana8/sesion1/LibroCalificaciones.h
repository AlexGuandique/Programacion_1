// Definición de la clase LibroCalificaciones en un archivo separado de main.
#include <iostream>
#include <string> 
using namespace std;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
private:
    string nombreCurso; // nombre del curso para este LibroCalificaciones

public:
    /* el constructor inicializa nombreCurso con la cadena que 
    se suministra como argumento*/
    explicit LibroCalificaciones( string nombre ) 
    : nombreCurso( nombre )  // inicializador de miembro para inicializar nombreCurso
    {
        //Cuerpo vacio
    } // fin del constructor de LibroCalificaciones

    // función para establecer el nombre del curso
    void establecerNombreCurso( string nombre )
    {
        nombreCurso = nombre; // almacena el nombre del curso en el objeto
    } // fin de la función establecerNombreCurso

    // función para obtener el nombre del curso
     string obtenerNombreCurso() const
    {
        return nombreCurso; // devuelve el nombreCurso del objeto
    } // fin de la función obtenerNombreCurso

    // muestra un mensaje de bienvenida al usuario de LibroCalificaciones
    void mostrarMensaje() const
    {
    // llama a obtenerNombreCurso para obtener el nombreCurso
    cout << "Bienvenido al libro de calificaciones para\n"
    << obtenerNombreCurso()
    << "!" << endl;

    } // fin de la función mostrarMensaje
}; // fin de la clase LibroCalificaciones