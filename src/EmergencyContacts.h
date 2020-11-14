//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_EMERGENCYCONTACTS_H
#define MY_PROJECT_NAME_EMERGENCYCONTACTS_H
#include <iostream>
using namespace std;
class EmergencyContacts {
private:
    string name;
    string phone;
    string relationship;
public:
    const string &getName() const;

    void setName(const string &name);

    const string &getPhone() const;

    void setPhone(const string &phone);

    const string &getRelationship() const;

    void setRelationship(const string &relationship);

    virtual ~EmergencyContacts();

    EmergencyContacts();

    EmergencyContacts(const string &name, const string &phone, const string &relationship);
};


#endif //MY_PROJECT_NAME_EMERGENCYCONTACTS_H
