// Venta.cpp
#include <"Venta.h">

Venta::Venta(int id, int clienteId, int productoId, int cantidad)
    : id(id), clienteId(clienteId), productoId(productoId), cantidad(cantidad) {}

string Venta::mostrarVenta() {
    return "Venta ID: " + to_string(id) + " - Cliente ID: " + to_string(clienteId) + ", Producto ID: " + to_string(productoId) + ", Cantidad: " + to_string(cantidad);
}

int Venta::getId() { return id; }
int Venta::getClienteId() { return clienteId; }
int Venta::getProductoId() { return productoId; }
int Venta::getCantidad() { return cantidad; }
