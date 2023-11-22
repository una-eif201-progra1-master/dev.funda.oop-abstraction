//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef DEV_FUNDA_OOP_ABSTRACTION_EMPLOYEE_H
#define DEV_FUNDA_OOP_ABSTRACTION_EMPLOYEE_H

#include <iostream>
#include <string>
#include <utility>
#include "AbstractEmployee.h"
using namespace std;

class Employee: AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void askForPromotion() override {
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry no promotion for you." << endl;
    }

    Employee(string name, string company, int age) : Name(std::move(name)), Company(std::move(company)), Age(age) {}

    const string &getName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

    const string &getCompany() const {
        return Company;
    }

    void setCompany(const string &company) {
        Company = company;
    }

    int getAge() const {
        return Age;
    }

    void setAge(int age) {
        Age = age;
    }

    // ... Constructors, Getters and Setters
};


#endif //DEV_FUNDA_OOP_ABSTRACTION_EMPLOYEE_H
