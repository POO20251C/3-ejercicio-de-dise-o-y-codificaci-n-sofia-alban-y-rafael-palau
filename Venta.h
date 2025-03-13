
// Venta.h
#ifndef VENTA_H
#define VENTA_H
#include "Producto.h"
#include "Cliente.h"
#include <vector>
using namespace std;

class Venta {
private:
    Cliente* cliente;
    vector<pair<Producto*, int>> carrito;
    double total;
public:
    Venta(Cliente* cliente);
    bool agregarProducto(Producto* producto, int cantidad);
    void calcularTotal();
    double getTotal() const;
    void mostrarVenta() const;
};

#endif