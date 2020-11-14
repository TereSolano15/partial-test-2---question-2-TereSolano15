//
// Created by Tere Solano on 14/11/2020.
//

#include "Producto.h"

Producto::Producto(const string &nombre, float version, const string &releaseDate, bool demo,
                   const vector<Person> &personas) : nombre(nombre), version(version), releaseDate(releaseDate),
                                                     demo(demo), personas(personas) {}

Producto::Producto() {}

Producto::~Producto() {

}

const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

float Producto::getVersion() const {
    return version;
}

void Producto::setVersion(float version) {
    Producto::version = version;
}

const string &Producto::getReleaseDate() const {
    return releaseDate;
}

void Producto::setReleaseDate(const string &releaseDate) {
    Producto::releaseDate = releaseDate;
}

bool Producto::isDemo() const {
    return demo;
}

void Producto::setDemo(bool demo) {
    Producto::demo = demo;
}

const vector<Person> &Producto::getPersonas() const {
    return personas;
}

void Producto::setPersonas(const vector<Person> &personas) {
    Producto::personas = personas;
}
