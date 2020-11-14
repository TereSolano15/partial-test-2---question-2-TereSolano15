//
// Created by Tere Solano on 14/11/2020.
//

#include "EmergencyContacts.h"

EmergencyContacts::EmergencyContacts(const string &name, const string &phone, const string &relationship) : name(name),
                                                                                                            phone(phone),
                                                                                                            relationship(
                                                                                                                    relationship) {}

EmergencyContacts::EmergencyContacts() {}

EmergencyContacts::~EmergencyContacts() {

}

const string &EmergencyContacts::getName() const {
    return name;
}

void EmergencyContacts::setName(const string &name) {
    EmergencyContacts::name = name;
}

const string &EmergencyContacts::getPhone() const {
    return phone;
}

void EmergencyContacts::setPhone(const string &phone) {
    EmergencyContacts::phone = phone;
}

const string &EmergencyContacts::getRelationship() const {
    return relationship;
}

void EmergencyContacts::setRelationship(const string &relationship) {
    EmergencyContacts::relationship = relationship;
}
