//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_EMAIL_H
#define MY_PROJECT_NAME_EMAIL_H
#include <iostream>
#include <string>
using namespace std;
class Email {
private:
    string email;
public:
    Email();

    Email(istream& input);

    virtual ~Email();

    Email(const string &email);

    void guardar(ostream & out);

    const string &getEmail() const;

    void setEmail(const string &email);
};


#endif //MY_PROJECT_NAME_EMAIL_H
