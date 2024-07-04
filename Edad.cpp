#include <iostream>
using namespace std;
 int main()
    {
        int diaActual, mesActual, anioActual, diaNacimiento, mesNacimiento, anioNacimiento, edad;

        cout << "********************************************************" << endl;
        cout << "DIME TU FECHA DE NACIMIENTO Y TE DIRE CUAN JOVATO/A ERES" << endl;
        cout << "********************************************************" << endl;
        cout << endl;

        cout << "Ingresa tu dia de Nacimiento (dd): ";
        cin >> diaNacimiento;
        cout << "Ingresa tu mes de Nacimiento (mm): ";
        cin >> mesNacimiento;
        cout << "Ingresa tu anio de Nacimiento (aaaa): ";
        cin >> anioNacimiento;
        cout << endl;

        cout << "*************************" <<  endl;
        cout << "Naciste el: " << diaNacimiento << " / " << mesNacimiento << " / " << anioNacimiento << endl;
        cout << "*************************" <<  endl;
        cout << endl;

        cout << "Ingresa el dia actual (dd): ";
        cin >> diaActual;
        cout << "Ingresa el mes actual (mm): ";
        cin >> mesActual;
        cout << "Ingresa el anio actual (aaaa): ";
        cin >> anioActual;
        cout << endl;

        cout << "********************************" <<  endl;
        cout << "La fecha actual es: " << diaActual << " / " << mesActual << " / " << anioActual << endl;
        cout << "********************************" <<  endl;
        cout << endl;

        edad = anioActual - anioNacimiento;

        if((mesActual < mesNacimiento) || ((mesActual == mesNacimiento) && (diaActual < diaNacimiento)))
            {
                edad--;
            }

        cout << "************************************************************************************" << endl;
        cout << "FELICITACIONES!! TENES " << edad << " ANIOS." << endl;

        if(edad <= 25)
            {
                cout << "TENES TODO EL FUTURO POR DELANTE... PARA QUE TE CAGUE A TROMPADAS..." << endl;
            }
            else if((edad > 25) && (edad <= 50))
                {
                    cout << "YA TENES UNOS CUANTOS ABOLLONES PERO ESTAS EN LA MEJOR ETAPA DE LA VIDA" << endl;
                }
                else if((edad > 50) && (edad <= 70))
                    {
                        cout << "YA TENES TU VIDA HECHA A DISFRUTAR... Y SINO ... QUE ESTAS ESPERANDO? ... A LA PARCA?" << endl;
                    }
                    else if((edad > 70) && (edad <= 100))
                        {
                            cout << "EHHH?... AUN CON VIDA?..." << endl;
                        }
        cout << endl;
        cout << "************************************************************************************" << endl;
        cout << "NO IMPORTA LA EDAD QUE TENGAS LO MAS IMPORTANTE ES MANTENERTE ACTIVO Y SOBRE TODO..." << endl;
        cout << "DISFRUTAR DE LA VIDA, PORQUE ES MUY CORTA... ASI QUE A DISFRUTAR DEL VIAJE..." << endl;
        cout << "************************************************************************************" << endl;
        cout << endl;

        return 0;
    }