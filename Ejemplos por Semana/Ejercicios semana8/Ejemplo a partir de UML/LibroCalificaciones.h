//LibroCalificaciones.h
#include<iostream>
#include<string>

using namespace std;

class LibroCalificaciones
{
    private:
        string nombreCurso;
    public:
        /*explicit LibroCalificaciones(string nCurso = "Sin Nombre"){
            nombreCurso = nCurso;
        }*/
        
        explicit LibroCalificaciones() : nombreCurso("Sin Nombre"){}
      
        void establecerNombreCurso(string nCurso){
            nombreCurso = nCurso;
        }
        string obtenerNombreCurso(){
            return nombreCurso;
        }
        void mostrarMensaje(){
            cout << "Libro de calificaciones de " << nombreCurso <<endl;
        }
};