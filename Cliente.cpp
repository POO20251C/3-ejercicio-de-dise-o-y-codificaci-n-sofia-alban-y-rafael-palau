// Cliente.cpp
#include "Cliente.h"

Cliente::Cliente(int id, string nombre) : id(id), nombre(nombre) {}

int Cliente::getId() { return id; }
string Cliente::getNombre() { return nombre; }
void Cliente::setId(int nuevoId) { id = nuevoId; }
void Cliente::setNombre(string nuevoNombre) { nombre = nuevoNombre; }
