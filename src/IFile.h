//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_IFILE_H
#define MY_PROJECT_NAME_IFILE_H
#include "Person.h"

class Ifile{
public:
    virtual void save(vector<Person> persons) = 0;
};
#endif //MY_PROJECT_NAME_IFILE_H
