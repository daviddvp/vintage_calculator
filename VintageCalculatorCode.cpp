#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <algorithm>  // Include this library to use replace

using namespace std;

float operar(float a, float b, char op) {
    if (op == '/' && b == 0) { 
        cout << "Error: Cannot divide by zero.\n"; 
        return numeric_limits<float>::quiet_NaN(); 
    }
    return (op == '+') ? a + b : (op == '-') ? a - b : (op == '*') ? a * b : a / b;
}

float leerNumero(const string& mensaje) {
    float num;
    string entrada;
    while (true) {
        cout << mensaje;
        cin >> entrada;
        replace(entrada.begin(), entrada.end(), ',', '.');  // Replace commas with dots

        stringstream ss(entrada);
        if (ss >> num && ss.eof()) {
            break;  // Exit the loop if the input is valid
        } else {
            cout << "Invalid input. Please try again.\n";
            cin.clear();  // Clear the error state of cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the incorrect input
        }
    }
    return num;
}

int main() {
    int opcion;
    while (true) {
        cout << "\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n0. EXIT\nOption: ";
        cin >> opcion;

        if (opcion < 0 || opcion > 4) { 
            cout << "Invalid option. Please try again.\n"; 
            continue;
        }
        if (opcion == 0) { cout << "Exiting...\n"; break; }

        float num1 = leerNumero("First number: ");
        float num2 = leerNumero("Second number: ");
        char op = (opcion == 1) ? '+' : (opcion == 2) ? '-' : (opcion == 3) ? '/' : '*';

        cout << "Result: " << operar(num1, num2, op) << "\n";
    }
    return 0;
}