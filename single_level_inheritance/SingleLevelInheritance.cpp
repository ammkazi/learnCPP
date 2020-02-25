#include <iostream>
using namespace std;

// Base Class
class Person
{
    // variables only visible to derived class
protected:
    int age;
    char name[20];

public:
    void acceptPerson()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
    }
    void displayPerson()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

// Derived Class
class Employee : public Person
{
    // only visible to methods of the same class.
private:
    int id;
    double salary;

public:
    void acceptEmp()
    {
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your salary : ";
        cin >> salary;
    }
    void displayEmp()
    {
        cout << "ID : " << id << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee emp;
    emp.acceptPerson();
    emp.acceptEmp();
    emp.displayPerson();
    emp.displayEmp();

    return 0;
}