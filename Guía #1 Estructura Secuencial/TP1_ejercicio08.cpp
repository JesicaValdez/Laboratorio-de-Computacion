/*Nombre: Jesica Valdez
TP N°: 1
Ejercicio N°: 8
Comentarios: Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
Ejemplo 1. Si el importe de la venta sin descuento es $ 1.500 y el importe de la venta con descuento es $ 1.200 entonces el porcentaje de descuento aplicado fue el 20%.
Ejemplo 2. Si el importe de la venta sin descuento es $ 500 y el importe de la venta con descuento es $ 500 entonces el porcentaje de descuento aplicado fue el 0%.

*/
#include <iostream>
using namespace std;


int main ()
{
    float importeSinDesc, importeConDesc, porcentajeDesc;

    cout << "......................................BIENVENIDO..........................................." << endl;
    cout << "                               CALCULADORA DE DESCUENTOS                 " << endl << endl << endl;


    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Para calcular el porcentaje de descuento completar informacion en los siguientes dos pasos:" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl << endl << endl;

    cout << "1. Ingresa el importe de la venta: $";
    cin >> importeSinDesc;
    cout << "2. A continuacion ingresa el importe de dicha venta con descuento incluido: $";
    cin >> importeConDesc;

    porcentajeDesc = ((importeSinDesc-importeConDesc)*100)/importeSinDesc;

    cout << endl << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "                  El porcentaje de descuento aplicado es de: " << porcentajeDesc << "%." << endl;
    cout << "-----------------------------------------------------------------------------------------";



    return 0;

}
