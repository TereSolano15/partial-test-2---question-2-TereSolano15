//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_PHONE_H
#define MY_PROJECT_NAME_PHONE_H
#include <iostream>
using namespace std;

class Phone {
private:
    string home;
    string mobile;
public:
    Phone(const string &home, const string &mobile);

    Phone();

    virtual ~Phone();

    const string &getHome() const;

    void setHome(const string &home);

    const string &getMobile() const;

    void setMobile(const string &mobile);

    void guarda(ostream & out);
};


#endif //MY_PROJECT_NAME_PHONE_H
