//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_FILEBINARY_H
#define MY_PROJECT_NAME_FILEBINARY_H
#include "IFile.h"
#include <sstream>
#include "Producto.h"
#include <fstream>
class FileBinary : Ifile{
public:
    virtual ~FileBinary();
    string leer(string filename) override;
    void guardar(string filename);
};


#endif //MY_PROJECT_NAME_FILEBINARY_H
