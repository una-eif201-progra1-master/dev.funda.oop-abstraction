//
// Created by Maikol Guzman on 21/11/23.
//

#include "Employee.h"

int main() {
    Employee employee1 = Employee("John", "Apple", 35);
    employee1.askForPromotion();  // Output: John got promoted!
    return 0;
}