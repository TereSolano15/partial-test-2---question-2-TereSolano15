//
// Created by Tere Solano on 14/11/2020.
//

#include "Phone.h"

Phone::Phone(const string &home, const string &mobile) : home(home), mobile(mobile) {}

Phone::Phone() {}

const string &Phone::getHome() const {
    return home;
}

void Phone::setHome(const string &home) {
    Phone::home = home;
}

const string &Phone::getMobile() const {
    return mobile;
}

void Phone::setMobile(const string &mobile) {
    Phone::mobile = mobile;
}

void Phone::guarda(ostream &out) {
    out<<this->home<<",";
    out<<this->mobile;
}

Phone::~Phone() {

}
