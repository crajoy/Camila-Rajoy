#include <iostream>

using namespace std;

int main(){
    int opcion;

    do{
       cout << "MENU DE OPCIONES\n";
       cout << "1. Determinar si un anio es bisiesto\n";
       cout << "2. Tabla de multiplicar inversa\n";
       cout << "3. FizzBuzz\n";
       cout << "4. Salir del programa\n";
       cout << "Ingrese una opcion: "; cin >> opcion;

       cout << endl;

    switch(opcion){
       case 1:
       int anio;
       cout << "Ingrese un anio: "; cin >> anio;

       if (anio%4 == 0 && anio%100 !=0){
            cout << anio << " es un anio bisiesto.\n";

       } else {
            cout << anio << " NO es un anio bisiesto.\n";

       }

       cout << endl;
       break;



       case 2:
       int numero,i, resultado;
       cout << "Ingrese un numero: "; cin >> numero;


      /* cout << "Tabla de multiplicar del " << numero << ":\n";*/
       for (int i=1; i <= 10; ++i){

       resultado = (numero * i);
       cout << numero << "X" << i << "=" << resultado << endl;

       }

       cout << endl;
       break;



       case 3:
       cout << "Ingrese el limite de numeros: "; cin >>numero;

       for (int i=1; i<=numero; i++){
       cout << i << endl;



       }


       cout << endl;
       break;


        default:
        cout << "Estas saliendo del programa.";
        cout << endl;
        break;
    }

    } while (opcion !=4);

    return 0;
}
