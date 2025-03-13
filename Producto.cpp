// Producto.cpp
#include "Producto.h"
#include <iostream>

Producto::Producto(int id, string nombre, double precio, int cantidadInventario)
    : id(id), nombre(nombre), precio(precio), cantidadInventario(cantidadInventario) {}

int Producto::getId() const { return id; }
string Producto::getNombre() const { return nombre; }
double Producto::getPrecio() const { return precio; }
int Producto::getCantidadInventario() const { return cantidadInventario; }

void Producto::aumentarInventario(int cantidad) { cantidadInventario += cantidad; }

bool Producto::disminuirInventario(int cantidad) {
    if (cantidadInventario >= cantidad) {
        cantidadInventario -= cantidad;
        return true;
    }
    return false;
}

void Producto::mostrarInfo() const {
    cout << "ID: " << id << ", Nombre: " << nombre << ", Precio: $" << precio 
         << ", Cantidad en Inventario: " << cantidadInventario << endl;
}
