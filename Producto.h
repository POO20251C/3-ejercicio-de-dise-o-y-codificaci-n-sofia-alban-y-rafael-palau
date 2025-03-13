// Producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
    int id;
    string nombre;
    double precio;
    int cantidadInventario;
public:
    Producto(int id, string nombre, double precio, int cantidadInventario);
    int getId() const;
    string getNombre() const;
    double getPrecio() const;
    int getCantidadInventario() const;
    void aumentarInventario(int cantidad);
    bool disminuirInventario(int cantidad);
    void mostrarInfo() const;
};

#endif