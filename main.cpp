// main.cpp
#include "Tienda.h"
#include <iostream>

int main() {
    Tienda tienda;
    
    Producto p1(1, "Balón", 20.5, 10);
    Producto p2(2, "Raqueta", 50.0, 5);
    tienda.agregarProducto(p1);
    tienda.agregarProducto(p2);
    
    Cliente c1(1, "Rafael Palau");
    tienda.agregarCliente(c1);
    
    vector<pair<Producto*, int>> compras = {{&p1, 2}, {&p2, 1}};
    tienda.realizarVenta(&c1, compras);
    
    tienda.mostrarProductos();
    tienda.mostrarComprasCliente(&c1);
    
    return 0;
}
