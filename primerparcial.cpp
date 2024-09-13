#include <iostream>
using namespace std;






void anioBisiesto() {
    int anio;
    cout << "Introduzca un anio: ";
    cin >> anio;

    if (anio % 4  != 0) {
        cout << " El anio " << anio << " no es bisiesto." << endl;

    } else if ( anio % 100 != 0) {
        cout << "El anio " << anio << "  es bisiesto." << endl;
        return;
    }
}

void tablaDeMultiplicar (){

 int multiplicacion;

     cout<< " Ingrese el numero que desee multiplicar" << endl;
        cin >> multiplicacion;

 for ( int i = 1 ; i <= 10 && multiplicacion > 1 ;  i ++ ) {
            cout<< i << "x" << multiplicacion << "=" << i * multiplicacion << endl;

        }
        cout<< " " << endl;

}








int main() {
    int opcion;

    do {
        cout << "\n---Menu de opciones---" << endl;
        cout << "1) Determinar si es un anio Bisiesto " << endl;
        cout << "2) tabla de multiplicar invertida" << endl;
        cout << "3) Efervescencia" << endl;
        cout << "0) Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                anioBisiesto();
                break;
            case 2:
               tablaDeMultiplicar();
                break;
            case 3:

            case 0:
                cout << "Saliendo del programa"<<endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, ingresa un numero del 1 al 3(0 para salir)." << endl;
                break;
        }


    } while (opcion != 0);

    return 0;
}
