//
// Created by Tere Solano on 14/11/2020.
//

#include "Producto.h"

Producto::Producto() {}

Producto::~Producto() {

}
Producto::Producto(istream& input) {
    string temporal = to_string(this->version);
    getline(input, this->producto, ',');
    getline(input, temporal, ',');
    getline(input, this->releaseDate, ',');
    input >> this->demo;
    input.ignore();

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
void Producto::guarda(ostream &out) {
    out<<this->producto<<",";
    out<<this->version<<",";
    out<<this->releaseDate<<",";
    out<<this->demo;
}
const string &Producto::getProducto() const {
    return producto;
}

void Producto::setProducto(const string &producto) {
    Producto::producto = producto;
}

Producto::Producto(const string &producto, float version, const string &releaseDate, bool demo,
                   const vector<Person> &personas) : producto(producto), version(version), releaseDate(releaseDate),
                                                     demo(demo), personas(personas) {}
