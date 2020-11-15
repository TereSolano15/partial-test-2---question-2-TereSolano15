//
// Created by Tere Solano on 14/11/2020.
//

#include "FileBinary.h"

void FileBinary::guardar(string filename) {
    vector<Producto*> productList;

    int cant = productList.size();

    ofstream out(filename, ios::out);

    if(out.good()){

        for(int cont= 0; cont < cant; cont++){

            Producto* product = productList[cont];

            product->guarda(out);

            if(cont != cant -1){

                out << endl;

            }

            out.close();

        }

    }
}

void FileBinary::leer(string filename) {
    vector<Producto*> productList;
    try {
        ifstream in(filename, ios::in);
        if (in.good()) {

            while (!in.eof() && in.good()) {

                productList.push_back(new Producto(in));

            }
            in.close();
        }
    }catch (std::ifstream::failure e) {throw runtime_error("file didnt open, exception opening file");}
}