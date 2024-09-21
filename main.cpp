#include <iostream>

#include "Person.h"
using namespace std;

int add(const int& a, const int& b) {
    // PAR REF - TO MORE PERFORMANCE
    return a + b;
}

void controlMemory() {
    int* a = new int; // allocation dynamique
    int* b = new int;

    *a = 5;
    *b = 10;

    cout << add(*a, *b) << endl;

    delete a;
    delete b; // libérer la mémoire
}

int main() {
    str:string name;
    int i = 0;
    while(i<5) {
        if (i%2 == 0) {
            cout << i*2 << endl;
        }else {
            cout << add(i, 2) << endl;
        }
        i++;
    }
    controlMemory();

    Person p("Man", 20);
    p.introduce();
    const std::string& adress = "Tana";
    p.addAdress(adress);
    p.introduce();

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << name << std::endl;

    return 0;
}
