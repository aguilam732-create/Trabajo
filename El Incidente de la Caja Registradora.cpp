#include <iostream>
using namespace std;

int main() {
    char operador;
    float num1, num2, resultado;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    if (operador == '+') resultado = num1 + num2;
    else if (operador == '-') resultado = num1 - num2;
    else if (operador == '*') resultado = num1 * num2;
    else if (operador == '/') {
        if (num2 == 0) {
            cout << "Error: No se puede dividir por cero." << endl;
            return 0;
        } else resultado = num1 / num2;
    } else {
        cout << "Operador inválido." << endl;
        return 0;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}