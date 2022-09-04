/*Nombre: Jesica Valdez
TP N°: 1
Ejercicio N°: 02
Comentarios: Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
#include <iostream>
using namespace std;



int main ()
{
    int n1, n2, aux;

    cout << "..............BIENVENIDO............" << endl;
    cout << "Ingrese 2 numeros: " << endl << endl << "Ingrese #1: " << endl;
    cin >> n1;
    cout << "Ingrse #2: " << endl;
    cin >> n2;

    aux = n1;
    n1 = n2;
    n2 = aux;

        cout << ".................................." << endl;
        cout << "El valor de Numero 1 es: " << n1 << endl << "El valor de Numero 2 es: " << n2 << endl;


    return 0;

}
