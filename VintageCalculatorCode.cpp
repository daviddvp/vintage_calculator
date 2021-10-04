#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    float num1;
    float num2;
  

    do {
        system("cls");

        // Texto del menu principal
        cout << "\nMenu de Opciones" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Division" << endl;
        cout << "4. Multiplicacion" << endl;
        cout << "0. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        cout << "\n";

        switch (opcion) {
        case 1:
            cout << "Inserta un numero: "; cin >> num1;
            cout << "Inserta otro numero: "; cin >> num2;
            cout << "Resultado: " << num1 + num2 << endl;

            system("pause>nul"); // Pausa
            break;

        case 2:
            // Lista de instrucciones de la opción 2     
            cout << "Inserta un numero: "; cin >> num1;
            cout << "Inserta otro numero: "; cin >> num2;
            cout << "Resultado: " << num1 - num2 << endl;

            system("pause>nul"); // Pausa
            break;

        case 3:
            // Lista de instrucciones de la opción 3                
            cout << "Inserta un numero: "; cin >> num1;
            cout << "Inserta otro numero: "; cin >> num2;
            cout << "Resultado: " << num1 / num2 << endl;

            system("pause>nul"); // Pausa            
            break;

        case 4:
            // Lista de instrucciones de la opción 4 
            cout << "Inserta un numero: "; cin >> num1;
            cout << "Inserta otro numero: "; cin >> num2;
            cout << "Resultado: " << num1 * num2 << endl;

            system("pause>nul"); // Pausa                
            break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);

    return 0;
}