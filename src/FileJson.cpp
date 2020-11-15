//
// Created by Tere Solano on 14/11/2020.
//

#include "FileJson.h"

void to_json(json &_json, const Producto &_producto) {
    json jPersons;
    auto jPersonList = json::array();
    json jPhones;
    auto jPhoneList =  json::array();
    json jContacts;
    auto jContactList = json::array();
    json jMails;
    auto jMailList = json::array();

    for(const EmergencyContacts& personContacts : _producto.getPersonas().data()->getEmergencyContacts()){
        jContacts["name"] = personContacts.getName();
        jContacts["phone"] = personContacts.getPhone();
        jContacts["relationship"] = personContacts.getRelationship();
        jContactList.push_back(jContacts);
    }

    for(const Phone& personPhones : _producto.getPersonas().data()->getPhones()){
        jPhones["home"] = personPhones.getHome();
        jPhones["mobile"] = personPhones.getMobile();
        jPhoneList.push_back(jPhones);
    }
    for(const Email& personEmail : _producto.getPersonas().data()->getEmails()){
        jMails["mail"] = personEmail.getEmail();
        jMailList.push_back(jMails);
    }
    for(const Person& personProduct : _producto.getPersonas()) {
        jPersons["id"] = personProduct.getId();
        jPersons["name"] = personProduct.getName();
        jPersons["dateOfBirth"] = personProduct.getDateOfBirth();
        jPersons["registered"] = personProduct.isRegistered();
        jPersons["phones"] = jPhoneList;
        jPersons["email"] = jMailList;
        jPersons["emergencyContacts"] = jContactList;
        jPersonList.push_back(jPersons);
    }

    _json["product"] = _producto.getProducto();
    _json["version"] = _producto.getVersion();
    _json["releaseDate"] = _producto.getReleaseDate();
    _json["person"] = jPersonList;
}

void from_json(const json &_json, Producto &_producto) {

    vector<EmergencyContacts> contactList;
    vector<Phone> phoneList;
    vector<Email> emailList;
    vector<Person> personList;
    json personData = _json["person"];

    // this method is necessary to deserialize tha information from the vector
    for (auto & data : personData) {
        EmergencyContacts contacts;
        contacts.setName(data.at("name").get<string>());
        contacts.setName(data.at("phone").get<string>());
        contacts.setRelationship(data.at("relationship").get<string>());
        contactList.push_back(contacts);
    }
    for (auto & data : personData){
        Phone phones;
        phones.setHome(data.at("home").get<string>());
        phones.setMobile(data.at("mobile").get<string>());
        phoneList.push_back(phones);
    }
    for (auto & data : personData){
        Email emails;
        emails.setEmail(data.at("email").get<string>());
        emailList.push_back(emails);
    }
    for (auto & data : personData){
        Person persons;

        persons.setId(_json.at("id").get<int>());
        persons.setName(_json.at("name").get<string>());
        persons.setPhones(phoneList);
        persons.setEmails(emailList);
        persons.setDateOfBirth(_json.at("dateOfBirth").get<string>());
        persons.setRegistered(_json.at("registered").get<bool>());
        persons.setEmergencyContacts(contactList);
        personList.push_back(persons);

    }
    _producto.setProducto(_json.at("product").get<string>());
    _producto.setVersion(_json.at("version").get<float>());
    _producto.setReleaseDate(_json.at("releaseDate").get<string>());
    _producto.setDemo(_json.at("demo").get<bool>());
    _producto.setPersonas(personList);
}

void FileJson::saveInJson(const string &jsonData, const string &filename) {
    std::ofstream file (filename, std::ofstream::out);
    file << jsonData;
    file.close();
}

string FileJson::leer(string filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}

string FileJson::serialize(const vector<Producto> &_productoLista) {
    json jsonData(_productoLista);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

vector<Producto> FileJson::deserialize(const string &_data) {
    json jsonData = json::parse(_data);
    vector<Producto> productoList = jsonData;

    return productoList;
}

void FileJson::guardar(std::string fileName) {

}
