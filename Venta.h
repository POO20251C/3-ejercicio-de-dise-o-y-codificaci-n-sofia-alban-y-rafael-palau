
// Venta.h
#ifndef VENTA_H
#define VENTA_H
#include "Producto.h"
#include "Cliente.h"

class Venta {
private:
    int id;
    int clienteId;
    int productoId;
    int cantidad;
public:
    Venta(int id, int clienteId, int productoId, int cantidad);
    string mostrarVenta();
    int getId();
    int getClienteId();
    int getProductoId();
    int getCantidad();
};

#endif
