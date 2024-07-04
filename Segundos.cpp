#include <iostream>
using namespace std;

void convertirSegundos(int segundosIngresados);

int main()
    {
        int segundos;

        cout << "*****************************" << endl;
        cout << "TUS SEGUNDOS TAMBIEN IMPORTAN" << endl;
        cout << "*****************************" << endl;
        cout << endl;

        cout << "El presente programita es un conversor de segundos a horas, minutos y (valga la redundancia) segundos." << endl;
        cout << endl;

        cout << "Ingresa tus segundos aqui: ";
        cin >> segundos;
        cout << endl;

        cout << "Converting espere per favore..." << endl;
        cout << endl;
        
        convertirSegundos(segundos);
        cout << "IMPORTANTE: Si ELLA no te da bola, no pierdas tus Valiosos Segundos porque No Vale La Pena, OK?" << endl;
        cout << endl;

        return 0;
    }

    void convertirSegundos(int segundosIngresados)
        {
            int horas, segundosRestantes, minutos, segundos;

            horas = segundosIngresados / 3600;
            segundosRestantes = segundosIngresados % 3600;
            minutos = segundosRestantes / 60;
            segundos = segundosRestantes % 60;

            cout << "*******************************************" << endl;
            cout << "EL TIEMPO INGRESADO EN SEGUNDOS EQUIVALE A: " << endl;
            cout << horas << " hs. " << minutos << " min. " << segundos << " seg." << endl;
            cout << "*******************************************" << endl;
            cout << endl;
        }