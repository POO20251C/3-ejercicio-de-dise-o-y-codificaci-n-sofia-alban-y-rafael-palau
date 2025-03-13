// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;
public:
    Cliente(int id, string nombre);
    int getId() const;
    string getNombre() const;
};

#endif
