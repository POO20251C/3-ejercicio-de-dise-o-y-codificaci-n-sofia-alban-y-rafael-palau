// Tienda.cpp
#include "Tienda.h"
#include <iostream>

void Tienda::agregarProducto(Producto producto) {
    productos.push_back(producto);
}

void Tienda::agregarCliente(Cliente cliente) {
    clientes.push_back(cliente);
}

bool Tienda::realizarVenta(Cliente* cliente, vector<pair<Producto*, int>> compras) {
    Venta nuevaVenta(cliente);
    for (auto& compra : compras) {
        if (!nuevaVenta.agregarProducto(compra.first, compra.second)) {
            cout << "Error: No se pudo realizar la compra de " << compra.first->getNombre() << endl;
            return false;
        }
    }
    ventas.push_back(nuevaVenta);
    return true;
}

void Tienda::mostrarProductos() const {
    cout << "Productos disponibles en la tienda:" << endl;
    for (const auto& producto : productos) {
        producto.mostrarInfo();
    }
}

void Tienda::mostrarComprasCliente(Cliente* cliente) const {
    cout << "Compras realizadas por " << cliente->getNombre() << ":\n";
    for (const auto& venta : ventas) {
        venta.mostrarVenta();
    }
}