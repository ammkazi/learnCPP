#include <iostream>
//#include <conio.h>

using namespace std;

class Test
{
  public:
    int *p;

  public:
    Test()
    {
        p = new int();
    }

    void read()
    {
        cout << "Enter a number : ";
        cin >> *p;
    }
    void display()
    {
        cout << "Number is " << *p << endl;
    }
    ~Test()
    {
        delete p;
        cout << "Destroyed in Destructor" << endl;
    }
};

int main()
{
    Test t;
    t.read();
    t.display();
    return 0;
}

// Output
// Enter a number : 10
// Number is 10
// Destroyed in Destructor