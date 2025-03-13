// Venta.cpp
#include "Venta.h"
#include <iostream>

Venta::Venta(Cliente* cliente) : cliente(cliente), total(0) {}

bool Venta::agregarProducto(Producto* producto, int cantidad) {
    if (producto->disminuirInventario(cantidad)) {
        carrito.push_back({producto, cantidad});
        calcularTotal();
        return true;
    }
    return false;
}

void Venta::calcularTotal() {
    total = 0;
    for (const auto& item : carrito) {
        total += item.first->getPrecio() * item.second;
    }
}

double Venta::getTotal() const { return total; }

void Venta::mostrarVenta() const {
    cout << "Cliente: " << cliente->getNombre() << "\nProductos comprados:" << endl;
    for (const auto& item : carrito) {
        cout << "- " << item.first->getNombre() << " x " << item.second << endl;
    }
    cout << "Total: $" << total << "\n";
}