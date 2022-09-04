/*Nombre: Jesica Valdez
TP N°: 1
Ejercicio N°: 6
Comentarios: Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.

*/
#include <iostream>
using namespace std;

int main ()
{
    float  semana1, semana2, semana3, semana4, promedio;
    float totalmes;
    float porcentajeSem1, porcentajeSem2, porcentajeSem3, porcentajeSem4;

    cout <<".............BIENVENIDO.............." <<endl;

    cout << "Ingrese la recaudacion de la Semana #1" <<endl;
    cin >> semana1;
    cout << "Ingrese la recaudacion de la Semana #2" <<endl;
    cin >> semana2;
    cout << "Ingrese la recaudacion de la Semana #3" <<endl;
    cin >> semana3;
    cout << "Ingrese la recaudacion de la Semana #4" <<endl;
    cin >> semana4;

    totalmes = semana1 + semana2 + semana3 + semana4;
    promedio = totalmes / 4;

    porcentajeSem1 = (semana1 * 100) /totalmes;
    porcentajeSem2 = (semana2 * 100) /totalmes;
    porcentajeSem3 = (semana3 * 100) /totalmes;
    porcentajeSem4 = (semana4 * 100) /totalmes;

    cout << "---------------------------------------------------" <<endl;
    cout << "El promedio de recaudacion por semana es: " << promedio <<endl;
    cout << "---------------------------------------------------" << endl;
    cout << "---------------------------------------------------" <<endl;
    cout << "El porcentaje vendido en la Semana uno es: " << porcentajeSem1 << "%." << endl;
    cout << "El porcentaje vendido en la Semana dos es: " << porcentajeSem2 << "%." << endl;
    cout << "El porcentaje vendido en la Semana tres es: " << porcentajeSem3 << "%." << endl;
    cout << "El porcentaje vendido en la Semana cuatro es: " << porcentajeSem4 << "%." << endl;
    cout << "---------------------------------------------------" <<endl;

    return 0;
}
