#include <iostream>
using namespace std;

int main()
    {
        double num1, num2, num3, promedio;

        cout << "*************" << endl;
        cout << "PROMEDIO DE 3 " << endl;
        cout << "*************" << endl;
        cout << endl;

        cout << "Ingresa el 1er numero: ";
        cin >> num1;
        cout << "Ingresa el 2do numero: ";
        cin >> num2;
        cout << "Ingresa el 3er numero: ";
        cin >> num3;
        cout << endl;

        cout << "**************************************************" << endl;
        cout << "Los numeros que ingresaste son: " << num1 << " - " << num2 << " - " << num3 << endl;
        cout << endl;
        cout << "Calculando el Promedio..." << endl;
        cout << endl;

        promedio = (num1 + num2 + num3) / 3;

        cout << "**************************************************" << endl;
        cout << "EL PROMEDIO DE LOS NUMEROS INGRESADOS ES: " << promedio << endl;
        cout << "**************************************************" << endl;
        cout << endl;

        return 0;
    }