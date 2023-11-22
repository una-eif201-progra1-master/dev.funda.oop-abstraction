# Abstraction

https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/

```c++
// Example of Abstraction
class AbstractEmployee {
  virtual void askForPromotion() = 0; // Pure Virtual Function
};

class Employee: AbstractEmployee {
  private:
    string Name;
    string Company;
    int Age;

  public:
    void askForPromotion() {
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry no promotion for you." << endl;
    }

    // ... Constructors, Getters and Setters
};

int main() {
    Employee employee1 = Employee("John", "Apple", 35);
    employee1.askForPromotion();  // Output: John got promoted!
    return 0;
}

```

In this example, `AbstractEmployee` provides an abstract base class with a pure virtual function `askForPromotion()`. The `Employee` class implements this method. This abstraction allows different types of employees to implement their own promotion logic.

These examples demonstrate the core principles of OOP in C++. Keep in mind that these are simplified examples for illustration and in a real-world application, these concepts are often used in more complex ways.