#include <iostream>
#include <String>
using namespace std;
/*Funcion suma*/
int suma(int a, int b)
{
    int c = a + b;
    return c;
}
int multiplicacion(int a, int b = 4)
{
    int c = a * b;
    return c;
}

int main()

{
    string texto = "Hola Mundo";
    string numero= "10.5";
    cout << stof(numero)+24.5;

    // cout << texto.size(); // Size para saber numero de caracteres

    /* FUNCIONES

    cout<< suma(3,5)<< endl;
    cout<<multiplicacion(5);
    */

    /* While Do While
    do {
        char answer;
        cout << "Do you want to finish (y) or (n)? " << endl;
        cin >> answer;
        if (answer == 'y')
        {
            cout << "See you later ";
            break;
        }
    } while (true);
    */

    /*For Pares  int i = 0;
      int lista[] = {5, 8, 20, 3 , 6, 7, 1, 98, 95, 20};
      int limite = sizeof(lista)/sizeof(lista[0]);
      cout << "Los numeros pares de la lista son "<<endl;
      for (i = 0; i < limite; i++)
      {

          if(lista[i]%2==0){
              cout  << lista[i]<<endl;
          }
      }
      */

    /* Ciclo For
    int i = 0;
    int lista[] = {100, 200, 300, 400};
    int limite = sizeof(lista)/sizeof(lista[0]);
    // Limite por Ingreso
    //cout << "Ingrese el limite = ";
    //cin >> limite;
    for (i = 0; i < limite; i++)
    {
        cout << "El numero es " << lista[i] * 3 << endl;
        if(lista[i]==200){
            break;
        }
    }
    */
    /*Switch

    int op = 0;
    cout << "Introduce una opcion del 1 al 2: ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Opcion 1";
        break;
    case 2:
        cout << "Opcion 2";
        break;
    default:
        cout << "Esto no existe";
        break;
    }*/

    /* IF ELSE
     prueba:
     int edad = 0;
     cout << "Cual es tu edad: ";
     cin >> edad;


     if (edad >=18 && edad<=40){

         cout << "Puedes votar";

     }else{
         cout << "No puedes votar" <<endl;
         goto prueba;
     }
 */

    /*
    Hola Mundo y Listas mas Edades
    int edad = 0;
    edad=18;
    const char letra = 'A';
    int lista_edades[] ={ 35, 24 , 16};

    cout << edad << endl;
    cout << letra << endl;
    cout << lista_edades[0];
    */

    /* Tamaño de Cadenas
    int edades[]={24 , 40 , 7};
    int size_edades=sizeof(edades)/sizeof(edades[0]);
    cout << size_edades;*/

    /*Entrada y salida de datos
    int edad=0;
    cout << "edad: ";
    cin >> edad;
    cout << "Tu edad es: " << edad; */
}