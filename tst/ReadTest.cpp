//
// Created by Tere Solano on 15/11/2020.
//
#include "gtest/gtest.h"
#include "FileBinary.h"
#include "FileJson.h"
#include "IFile.h"
#include <vector>
#include "Producto.h"
TEST(ReadTestSuite, CheckRead){
FileJson fileJson;
FileBinary fileBinary;
Producto producto;
Producto producto1;
string dataFromJson;
string dataFromBin;
vector<Producto> productoFromJson;

    dataFromJson = fileJson.leer("Examen.json");
    productoFromJson = FileJson::deserialize(dataFromJson);

    dataFromBin = fileBinary.("datos_Examen.dat");

EXPECT_NO_THROW();


}
