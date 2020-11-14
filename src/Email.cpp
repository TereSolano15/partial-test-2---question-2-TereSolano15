//
// Created by Tere Solano on 14/11/2020.
//

#include "Email.h"

Email::Email(const string &email) : email(email) {}

Email::Email() {}

Email::~Email() {

}

const string &Email::getEmail() const {
    return email;
}

void Email::setEmail(const string &email) {
    Email::email = email;
}
