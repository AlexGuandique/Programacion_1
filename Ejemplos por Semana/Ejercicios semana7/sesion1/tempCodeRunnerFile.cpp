class Alumno : public Persona{
    public:
    string due, carrera, materias;

     void displayDerived(string d, string c, string m){
        cout << "Due: " << d <<endl;
        cout << "Carrera: " << c <<endl;
        cout << "Materia: " << m <<endl;
    }