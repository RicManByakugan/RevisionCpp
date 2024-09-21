//
// Created by acer on 21/09/2024.
//
#include <iostream>
#include <utility>
using namespace std;
#include "Person.h"

Person::Person(std::string  name, int age) : name(std::move(name)), age(age) {}

void Person::introduce() const {
    cout << "I am " << name << endl;
    if (!this->adress.empty()) {
        cout << "I live at " << adress << endl;
    }
}

void Person::addAdress(const string& adress) {
    this->adress = adress;
}



