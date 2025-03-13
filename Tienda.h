// Tienda.h
#ifndef TIENDA_H
#define TIENDA_H
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"
#include <vector>
using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Cliente> clientes;
    vector<Venta> ventas;
public:
    void agregarProducto(Producto producto);
    void agregarCliente(Cliente cliente);
    bool realizarVenta(Cliente* cliente, vector<pair<Producto*, int>> compras);
    void mostrarProductos() const;
    void mostrarComprasCliente(Cliente* cliente) const;
};

#endif