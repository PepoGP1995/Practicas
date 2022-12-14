#include <iostream>
#include <string>
using namespace std;
/* estructura persona*/
/*struct Persona
{
    string nombre;
    int edad;
};*/

class Persona
{
public:
    string nombre = "Diana";
    int edad = 26;
    void saludar(){
        cout << "Hola mi nombre es "<<nombre <<endl;
    }
};

int main()
{
    /*POO*/
    Persona *p = new Persona();
    Persona *p2= new Persona();
    p2-> nombre="Juan";
    p->saludar();
    p2->saludar();
    /*Uniones y enumeraciones*/

    /*Enumeraciones
    enum dias_semana {lunes='l', martes='m', miercoles='c', jueves='j', viernes='v', sabado='s', domingo='d'};
    dias_semana dia=domingo;
    cout << (char)dia;*/

    /* Uniones Ahorra espacio de memoria
    union numero_letra
     {
      int numero;
      char letra;
     };
     numero_letra x={'A'};
     cout << "x como un numero " <<(char) x.numero << endl;
     cout << "x como un numero " << (int) x.letra;
     */

    /*Estructuras de datos en C+

    // Persona p= Persona(); espacio tipo persona estructura
    // Persona p = Persona();
    // p.nombre="Diana";
    // p.edad=26;
    // cout << p.nombre << endl;
    // cout << p.edad;

    // Persona *p = new Persona(); en forma de puntero durante la ejecucion en forma dinamica la memoria

    Persona *p = new Persona();
    p->nombre = "Diana";
    p->edad = 26;
    cout << p->nombre << endl;
    cout << p->edad << endl;
    cout << &p << endl;
    cout << &p->nombre << endl;
    cout << &p->edad << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(p->nombre) << endl;
    cout << sizeof(p->edad) << endl;
    cout << sizeof(Persona);

    */

    /* Utilización de Punteros Memoria dinamica =! Memoria estatica 
    La memoria se reserva mientras se ejecuta el programa

    char letra= 'A';
    char *puntero=&letra;
    cout << (int *) &letra << endl;
    cout << (int *)puntero<< endl;
    cout << *puntero;*/
}