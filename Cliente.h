// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;
public:
    Cliente(int id, string nombre);
    int getId();
    string getNombre();
    void setId(int nuevoId);
    void setNombre(string nuevoNombre);
};

#endif
