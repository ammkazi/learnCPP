#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    void eat()
    {
        cout << "I eat 3 times a day." << endl;
    }
};

// Derived class
class Employee : public Person
{
public:
    // overriding eat function of the base class
    void eat()
    {
        cout << "I eat 4 times a day with spoon and fork" << endl;
    }
};

int main()
{
    Person p;
    p.eat();

    Employee e;
    e.eat();
}