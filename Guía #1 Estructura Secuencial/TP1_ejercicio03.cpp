/*Nombre: Jesica Valdez
TP N°:
Ejercicio N°:
Comentarios: Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.

*/
#include <iostream>
using namespace std;

int main ()
{
 int sueldo, cantVendida;

 cout << ".............BIENVENIDO!..........." << endl << endl << endl;
cout << "Para calcular el sueldo total ingresa a continuacion la cantidad de autos vendidos durante este mes:" << endl;
 cin >> cantVendida;

 sueldo = 15000 + (2000 * cantVendida);

cout << endl;
cout << "---------------------------------------------" << endl;
cout << "Cantidad de autos vendidos: " << cantVendida << " AUTOS" << endl;
cout << "Tu sueldo neto a cobrar es: $" << sueldo << endl;
cout << "---------------------------------------------" << endl;

return 0;

}
