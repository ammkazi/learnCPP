#include <iostream>
using namespace std;

class Continent
{
protected:
    char continentname[20] = "Asia";

public:
    void displayContinent()
    {
        cout << "Continent : " << continentname << endl;
    }
};
class Country : public Continent
{
protected:
    char countryname[20] = "India";

public:
    void displayCountry()
    {
        cout << "Country : " << countryname << endl;
    }
};
class State : public Country
{
protected:
    char statename[20] = "Maharashtra";

public:
    void displayState()
    {
        cout << "Sate : " << statename << endl;
    }
};

class City : public State
{
public:
    char cityname[20] = "Mumbai";

public:
    void displayCity()
    {
        cout << "City : " << cityname << endl;
    }
};

int main()
{
    City c;
    c.displayCity();
    c.displayState();
    c.displayCountry();
    c.displayContinent();

    return 0;
}