// main.cpp
#include "Tienda.h"
#include <iostream>
using namespace std;

int main() {
    Tienda tienda;
    Producto p1(1, "Guantes de Boxeo", 20.5, 10);
    Producto p2(2, "Bola Medicinal", 50.0, 5);
    tienda.agregarProducto(p1);
    tienda.agregarProducto(p2);

    Cliente c1(1, "Rafael Palau");
    Cliente c2(2, "Sofía Albán");
    tienda.agregarCliente(c1);
    tienda.agregarCliente(c2);

    tienda.realizarVenta(1, 1, 2);
    tienda.realizarVenta(2, 2, 1);

    cout << "Productos en la tienda:" << endl;
    for (const auto& producto : tienda.obtenerProductos()) {
        cout << producto << endl;
    }

    cout << "\nVentas realizadas:" << endl;
    for (const auto& venta : tienda.obtenerVentas()) {
        cout << venta << endl;
    }

    return 0;
}