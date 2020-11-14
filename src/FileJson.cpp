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

    for(const Person& personProduct : _producto.getPersonas()) {
        jPersons["id"] = personProduct.getId();
        jPersons["name"] = personProduct.getName();
        jPersons["dateOfBirth"] = personProduct.getDateOfBirth();
        jPersons["registered"] = personProduct.isRegistered();
        jPersons["phones"] = jPhoneList;
        jPersons["email"] = personProduct.getEmails();
        jPersons["emergencyContacts"] = jContactList;
        jPersonList.push_back(jPersons);
    }

    _json["product"] = _producto.getProducto();
    _json["version"] = _producto.getVersion();
    _json["releaseDate"] = _producto.getReleaseDate();
    _json["person"] = jPersonList;
}

void from_json(const json &_json, Person &_person) {

   // _person.setCorreo(_json.at("Correo").get<string>());

    vector<EmergencyContacts> contactList;
    vector<Phone> phoneList;
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

    }
    _person.setId(_json.at("id").get<int>());
    _person.setName(_json.at("name").get<string>());
    _person.setDateOfBirth(_json.at("dateOfBirth").get<string>());
    _person.setRegistered(_json.at("registered").get<bool>());
//    _person.setEmails(_json.at("email").get<string>());
    _person.setPhones(phoneList);
    _person.setEmergencyContacts(contactList);
}

void FileJson::saveInJson(const string &jsonData, const string &filename) {
    std::ofstream file (filename, std::ofstream::out);
    file << jsonData;
    file.close();
}

string FileJson::readInJson(const string &filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure& e) {
        throw exception();
    }

    return txtContent;
}


void FileJson::leer(string filename) {

    ArrayManager* manager = ArrayManager::getInstance();
    string infoJsonFile = readInJson(filename);
    vector<Person> vectorPerson;
    vectorPerson = FileJson::deserialize(infoJsonFile);
    manager->setPacientes(vectorPerson);
    manager->addEnfermedadArray();
    manager->ordenarEnfermedades();
}

string FileJson::serialize(const vector<Paciente> &_pacienteLista) {
    json jsonData(_pacienteLista);
    string jsonArray = jsonData.dump();
    return jsonArray;
}

vector<Paciente> FileJson::deserialize(const string &_data) {
    json jsonData = json::parse(_data);
    vector<Paciente> personList = jsonData;

    return personList;
}

void FileJson::guardar(std::string fileName) {

}
