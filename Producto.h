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
    int stock;
public:
    Producto(int id, string nombre, double precio, int stock);
    string mostrarInfo();
    bool vender(int cantidad);
    int getId();
    string getNombre();
    double getPrecio();
    int getStock();
    void setId(int nuevoId);
    void setNombre(string nuevoNombre);
    void setPrecio(double nuevoPrecio);
    void setStock(int nuevoStock);
};

#endif
