/*Nombre: Jesica Valdez
TP N°: 1
Ejercicio N°: 01
Comentarios: Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/

#include <iostream>
using namespace std;

int main ()
{
int cantHs, valorHr, sueldo;

cout << "...........................BIENVENIDO..............................." << endl;
cout << "                     CALCULADORA DE SUELDO                 " << endl << endl << endl;
cout << "Ingrese cantidad de horas trabajadas: " << endl;
cin >> cantHs;
cout << endl << "Cuanto es el valor que le pagan por cada hora que usted trabaja?" << endl << "Ingreselo a continuacion: $";
cin >> valorHr;
sueldo = cantHs * valorHr;

cout << endl;
cout << "--------------------------------------------------------------------" << endl;
cout << "De acuerdo a los datos ingresados, su sueldo a cobrar es: $" << sueldo << endl;
cout << "--------------------------------------------------------------------" << endl;

 return 0;
}
