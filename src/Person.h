//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <iostream>
#include <vector>
#include "Email.h"
#include "Phone.h"
#include <string>
#include "EmergencyContacts.h"
using namespace std;

class Person {
private:
    int id;
    string name;
    vector <Phone> phones;
    vector <Email> emails;
    string dateOfBirth;
    bool registered;
    vector<EmergencyContacts> emergencyContacts;
public:
    Person(int id, const string &name, const vector<Phone> &phones, const vector<Email> &emails,
           const string &dateOfBirth, bool registered, const vector<EmergencyContacts> &emergencyContacts);

    int getId() const;

    void setId(int id);

    Person(istream& input);

    void guarda(ostream &out);

    const string &getName() const;

    void setName(const string &name);

    const vector<Phone> &getPhones() const;

    void setPhones(const vector<Phone> &phones);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    bool isRegistered() const;

    void setRegistered(bool registered);

    const vector<EmergencyContacts> &getEmergencyContacts() const;

    void setEmergencyContacts(const vector<EmergencyContacts> &emergencyContacts);

    Person();

    const vector<Email> &getEmails() const;

    void setEmails(const vector<Email> &emails);

    virtual ~Person();
};


#endif //MY_PROJECT_NAME_PERSON_H
