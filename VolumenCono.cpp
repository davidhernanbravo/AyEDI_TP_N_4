#include <iostream>
#include <cmath>
using namespace std;

double volumenCono(double radio, double altura);

int main()
    {
        double radio, altura;

        radio = 14.5;
        altura = 26.79;

        cout << "************************************" << endl;
        cout << "CALCULAME EL VOLUMEN DE ESTE CONO..." << endl;
        cout << "************************************" << endl;
        cout << endl;

        cout << "Dados los valores de:" << endl;
        cout << "Radio = " << radio << endl;
        cout << "Altura = " << altura << endl;
        cout << endl;

        cout << "Calcularemos el Volumen del Cono." << endl;
        cout << endl;

        cout << "Varios pases matematicos mas tarde..." << endl;
        cout << endl;
        
        cout << "******************************************" << endl;
        cout << "EL VOLUMEN DEL CONITO ES IGUAL A: " << volumenCono(radio, altura) << endl;
        cout << "******************************************" << endl;
        cout << endl;

        return 0;
    }

    double volumenCono(double radio, double altura)
        {
            const double pi = 3.141592;
            double volumen;

            volumen = (pi * pow(radio, 2) * altura) / 3;

            return volumen;
        }