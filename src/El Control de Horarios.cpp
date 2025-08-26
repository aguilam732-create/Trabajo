#include <iostream>
using namespace std;

int main() {
    int hora, minuto;
    cout << "Ingrese la hora (0-23): ";
    cin >> hora;
    cout << "Ingrese los minutos (0-59): ";
    cin >> minuto;

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59)
        cout << "Hora válida: " << (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "") << minuto << endl;
    else
        cout << "Hora inválida." << endl;

    return 0;
}