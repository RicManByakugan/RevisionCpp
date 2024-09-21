//
// Created by acer on 21/09/2024.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
public:
    Person(std::string  name, int age);

    void introduce() const;
    void addAdress(const std::string& adress);
private:
    std::string name;
    std::string adress;
    int age;
};

#endif //PERSON_H
