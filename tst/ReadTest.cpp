//
// Created by Tere Solano on 15/11/2020.
//
#include "gtest/gtest.h"
#include "FileBinary.h"
#include "FileJson.h"
#include "IFile.h"
#include <vector>
#include "Producto.h"
TEST(ReadTestSuite, CheckRead) {
    FileJson fileJson;
    string dataFromJson;
    EXPECT_NO_THROW(dataFromJson = fileJson.leer(
            "C:\\Users\\Tere Solano\\CLionProjects\\partial-test-2---question-2-TereSolano15\\archivo\\Examen.json"));
}

TEST(DeserializeTestSuite, CheckDeserialize){
FileJson fileJson;
string dataFromJson;
vector<Producto> productoFromJson;
    dataFromJson = fileJson.leer("C:\\Users\\Tere Solano\\CLionProjects\\partial-test-2---question-2-TereSolano15\\archivo\\Examen.json");
    productoFromJson = FileJson::deserialize(dataFromJson);

EXPECT_NO_THROW(productoFromJson = FileJson::deserialize(dataFromJson););
}

TEST(GuardaTest3Suite, CheckGuarda){
    FileJson fileJson;
    FileBinary fileBinary;
    Producto producto;
    Producto producto1;
    string dataFromJson;
    string dataFromBin;
    vector<Producto> productoFromJson;
    dataFromJson = fileJson.leer("C:\\Users\\Tere Solano\\CLionProjects\\partial-test-2---question-2-TereSolano15\\archivo\\Examen.json");
    productoFromJson = FileJson::deserialize(dataFromJson);

    fileBinary.guardar("datos_Examen.dat");

    EXPECT_NO_THROW( dataFromJson = fileJson.leer("C:\\Users\\Tere Solano\\CLionProjects\\partial-test-2---question-2-TereSolano15\\archivo\\Examen.json"));

}
