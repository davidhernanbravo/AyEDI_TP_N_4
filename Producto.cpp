#include <iostream>
#include <iomanip>
using namespace std;

int main()
    {
        double num1, num2, num3, num4, producto;

        cout << "***********************" << endl;
        cout << "MULTIPLICANDO VARIABLES" << endl;
        cout << "***********************" << endl;
        cout << endl;

        cout << "Ingresa el 1er Numerito: ";
        cin >> num1;
        cout << "Ingresa el 2do Numerito: ";
        cin >> num2;
        cout << "Ingresa el 3er Numerito: ";
        cin >> num3;
        cout << "Ingresa el 4to Numerito: ";
        cin >> num4;
        cout << endl;

        cout << "Y Los Afortunados Ingresados son: " << num1 << ", " << num2 << ", " << num3 << " y " << num4 << endl;
        cout << endl;

        cout << "Recalculando.... Digo... Multiplicando..." << endl;
        cout << endl;

        producto = num1 * num2 * num3 * num4;

        cout << "********************************************************" << endl;
        cout << "LA RESULTACION DE MULTIPLICAR ESTOS INGRESOS DA: " << producto << endl;
        cout << "********************************************************" << endl;
        cout << endl;

        return 0;
    }