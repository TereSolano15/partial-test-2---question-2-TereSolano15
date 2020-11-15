//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_FILEJSON_H
#define MY_PROJECT_NAME_FILEJSON_H
#include "IFile.h"
#include <../lib/nlohmann/json.hpp>
#include<string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <iostream>
#include "Producto.h"
using namespace std;
using json = nlohmann::json;

class FileJson: public Ifile{
public:
    void guardar(std::string fileName) override;
    static void saveInJson(const string& jsonData, const std::string &filename);
    string leer(string filename) override;
    static string serialize(const vector<Producto>& _productoList);
    static vector<Producto> deserialize(const string& _data);

};


#endif //MY_PROJECT_NAME_FILEJSON_H
