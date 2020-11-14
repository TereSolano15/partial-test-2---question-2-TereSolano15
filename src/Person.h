//
// Created by Tere Solano on 14/11/2020.
//

#ifndef MY_PROJECT_NAME_PERSON_H
#define MY_PROJECT_NAME_PERSON_H
#include <iostream>
#include <vector>
using namespace std;

class Person {
    int id;
    string name;
    vector <Phone> phones;
    vector <Email> emails;
    string dateOfBirth;
    bool registered;
    vector<EmergencyContacts> emergencyContacts;

};


#endif //MY_PROJECT_NAME_PERSON_H
