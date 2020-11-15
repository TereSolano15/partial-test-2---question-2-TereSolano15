//
// Created by Tere Solano on 14/11/2020.
//

#include "Person.h"

Person::Person(int id, const string &name, const vector<Phone> &phones, const vector<Email> &emails,
               const string &dateOfBirth, bool registered, const vector<EmergencyContacts> &emergencyContacts) : id(id),
                                                                                                                 name(name),
                                                                                                                 phones(phones),
                                                                                                                 emails(emails),
                                                                                                                 dateOfBirth(
                                                                                                                         dateOfBirth),
                                                                                                                 registered(
                                                                                                                         registered),
                                                                                                                 emergencyContacts(
                                                                                                                         emergencyContacts) {
}

Person::Person() {}

Person::~Person() {

}
Person::Person(istream& input) {
   string temporal = to_string(this->id);
    string temporal2 = to_string(this->registered);

    getline(input,temporal,',');
    getline(input, this->name, ',');
    getline(input,this->dateOfBirth,',');
    getline(input,temporal2,',');

    input.ignore();
}
int Person::getId() const {
    return id;
}

void Person::setId(int id) {
    Person::id = id;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const vector<Phone> &Person::getPhones() const {
    return phones;
}

void Person::setPhones(const vector<Phone> &phones) {
    Person::phones = phones;
}

const string &Person::getDateOfBirth() const {
    return dateOfBirth;
}

void Person::setDateOfBirth(const string &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}

bool Person::isRegistered() const {
    return registered;
}

void Person::setRegistered(bool registered) {
    Person::registered = registered;
}

const vector<EmergencyContacts> &Person::getEmergencyContacts() const {
    return emergencyContacts;
}

void Person::setEmergencyContacts(const vector<EmergencyContacts> &emergencyContacts) {
    Person::emergencyContacts = emergencyContacts;
}

void Person::setEmails(const vector<Email> &emails) {
    Person::emails = emails;
}

const vector<Email> &Person::getEmails() const {
    return emails;
}
