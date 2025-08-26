#include <iostream>
#include <string>
using namespace std;

int main() {
    string tipo;
    int cantidad;
    float precio, total, descuento = 0;

    cout << "Tipo de cliente (VIP o Regular): ";
    cin >> tipo;
    cout << "Cantidad de productos: ";
    cin >> cantidad;
    cout << "Precio por producto: ";
    cin >> precio;

    total = cantidad * precio;

    if (tipo == "VIP" || tipo == "vip") descuento = 0.20;
    else if ((tipo == "Regular" || tipo == "regular") && cantidad >= 4) descuento = 0.10;

    float total_final = total * (1 - descuento);
    cout << "Total con descuento: $" << total_final << endl;

    return 0;
}