//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_EMAIL_H
#define MY_PROJECT_NAME_EMAIL_H
#include <iostream>
using namespace std;
class Email {
private:
    string email;
public:
    Email();

    virtual ~Email();

    Email(const string &email);

    const string &getEmail() const;

    void setEmail(const string &email);
};


#endif //MY_PROJECT_NAME_EMAIL_H
