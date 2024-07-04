#include <iostream>
using namespace std;

double fahrenheitAcelcius(double fahrenheit);

int main()
    {
        double fahrenheit;

        cout << "*********************************************************" << endl;
        cout << "CONVIERTE FAHRENHEIT A CELCIUS SIN PERDER TU CALENTURA..." << endl;
        cout << "*********************************************************" << endl;
        cout << endl;

        cout << "El siguiente programa aplica para:" << endl;
        cout << endl;
        cout << "1. Si ELLA no quiere Darte ESO que Tanto Deseas... " << endl;
        cout << "2. Si EL no quiere ENTREGARTE su Amor..." << endl;
        cout << "3. O simplemente convertir Grados Farhenheit a Grados Celcius." << endl;
        cout << endl;

        cout << "Ingresa la cantidad de Grados de Calentura o Friura en Grados Farhenheit aqui: ";
        cin >> fahrenheit;
        cout << endl;

        cout << "La temperatura ingresada es: " << fahrenheit << " F" << endl;
        cout << "Convirtiendo a Grados Celcius. Wait a moment please..." <<  endl;
        cout << endl;

        cout << "*****************************************************" << endl;
        cout << "LA CANTIDAD EQUIVALENTE EN GRADOS CELCIUS ES: " << fahrenheitAcelcius(fahrenheit) << endl;
        cout << "*****************************************************" << endl;
        cout << endl;

        return 0;
    }

    double fahrenheitAcelcius(double fahrenheit)
        {
            double celcius;
            
            celcius = (fahrenheit - 32) * 5.0 / 9.0;

            return celcius;
        }