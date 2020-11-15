//
// Created by Tere Solano on 14/11/2020.
//

#include "FileBinary.h"
void FileBinary::guardar(string filename) {

    vector<Producto *> productList;

    int cant = productList.size();
    try {
        ofstream out(filename, ios::out);

        if (out.good()) {

            for (int cont = 0; cont < cant; cont++) {

                Producto *product = productList[cont];

                product->guarda(out);

                if (cont != cant - 1) {

                    out << endl;

                }

                out.close();
            }
        }
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }
}

string FileBinary::leer(string filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}

FileBinary::~FileBinary() {

}
