//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_FILEBINARY_H
#define MY_PROJECT_NAME_FILEBINARY_H
#include "IFile.h"
#include "Producto.h"
#include <fstream>
class FileBinary : Ifile{

    void leer(string filename) override;
    void guardar(string filename) override;
};


#endif //MY_PROJECT_NAME_FILEBINARY_H
