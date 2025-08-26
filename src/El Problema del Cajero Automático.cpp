#include <iostream>
using namespace std;

int main() {
    string pin;
    int intentos = 0;
    float saldo = 100000;

    while (intentos < 3) {
        cout << "Ingrese su PIN: ";
        cin >> pin;

        if (pin == "5423") {
            int opcion;
            cout << "1. Consultar saldo\n2. Retirar dinero\nSeleccione una opción: ";
            cin >> opcion;

            if (opcion == 1) cout << "Su saldo es: $" << saldo << endl;
            else if (opcion == 2) {
                float retiro;
                cout << "Monto a retirar: ";
                cin >> retiro;
                if (retiro <= saldo) {
                    saldo -= retiro;
                    cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
                } else {
                    cout << "Fondos insuficientes." << endl;
                }
            } else cout << "Opción inválida." << endl;
            break;
        } else {
            intentos++;
            cout << "PIN incorrecto." << endl;
        }
    }

    if (intentos == 3) cout << "Cuenta bloqueada por seguridad." << endl;
    return 0;
}