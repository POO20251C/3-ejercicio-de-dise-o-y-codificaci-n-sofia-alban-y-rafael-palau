// Cliente.cpp
#include "Cliente.h"

Cliente::Cliente(int id, string nombre) : id(id), nombre(nombre) {}

int Cliente::getId() const { return id; }
string Cliente::getNombre() const { return nombre; }
