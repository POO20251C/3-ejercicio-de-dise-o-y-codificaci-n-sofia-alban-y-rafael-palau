// Producto.cpp
#include "Producto.h"

Producto::Producto(int id, string nombre, double precio, int stock)
    : id(id), nombre(nombre), precio(precio), stock(stock) {}

string Producto::mostrarInfo() {
    return "ID: " + to_string(id) + " Producto: " + nombre + ", Precio: $" + to_string(precio) + ", Stock: " + to_string(stock);
}

bool Producto::vender(int cantidad) {
    if (cantidad <= stock) {
        stock -= cantidad;
        return true;
    }
    return false;
}

int Producto::getId() { return id; }
string Producto::getNombre() { return nombre; }
double Producto::getPrecio() { return precio; }
int Producto::getStock() { return stock; }
void Producto::setId(int nuevoId) { id = nuevoId; }
void Producto::setNombre(string nuevoNombre) { nombre = nuevoNombre; }
void Producto::setPrecio(double nuevoPrecio) { precio = nuevoPrecio; }
void Producto::setStock(int nuevoStock) { stock = nuevoStock; }
