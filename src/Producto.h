//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_PRODUCTO_H
#define MY_PROJECT_NAME_PRODUCTO_H
#include "Person.h"

class Producto {
private:
    string producto;
    float version;
    string releaseDate;
    bool demo;
    vector<Person> personas;

public:
    Producto(const string &producto, float version, const string &releaseDate, bool demo,
             const vector<Person> &personas);


    const string &getProducto() const;

    void setProducto(const string &producto);

    float getVersion() const;

    void setVersion(float version);

    const string &getReleaseDate() const;

    void setReleaseDate(const string &releaseDate);

    bool isDemo() const;

    void setDemo(bool demo);

    const vector<Person> &getPersonas() const;

    void setPersonas(const vector<Person> &personas);

    virtual ~Producto();

    Producto();
};


#endif //MY_PROJECT_NAME_PRODUCTO_H
