#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int dia, mes, anio;
    cout << "Ingrese su fecha de nacimiento (dd mm aaaa): ";
    cin >> dia >> mes >> anio;

    bool fecha_valida = false;
    int dias_mes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    // Año bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) dias_mes[2] = 29;

    if (mes >= 1 && mes <= 12 && dia >= 1 && dia <= dias_mes[mes]) fecha_valida = true;

    time_t t = time(0);
    tm* now = localtime(&t);
    int mes_actual = now->tm_mon + 1;

    if (fecha_valida) {
        if (mes == mes_actual) cout << "¡Feliz cumpleaños! Aplica el descuento." << endl;
        else cout << "No aplica el descuento este mes." << endl;
    } else {
        cout << "Fecha inválida." << endl;
    }

    return 0;
}