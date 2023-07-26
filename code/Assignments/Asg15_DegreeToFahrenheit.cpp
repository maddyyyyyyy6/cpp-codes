#include <iostream>
using namespace std;

class Temperature
{
private:
    float celsius;
    float fahrenheit;

public:
    void getCelsius()
    {
        cout << "Enter Fahrenheit Value: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << celsius;
    }
};

int main()
{
    Temperature Chag;
    Chag.getCelsius();
}