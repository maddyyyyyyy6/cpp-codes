#include <iostream>
using namespace std;

class Circle
{
private:
    float pi = 3.14;
    float area;
    float radius;
    float circumference;
    float diameter;

public:
    void getRadius()
    {
        cout << "Enter value for radius: ";
        cin >> radius;
    }
    float getArea()
    {
        return pi * radius * radius;
    }
    float getCircumference()
    {
        return 2 * pi * radius;
    }
    float getDiameter()
    {
        
    }
} int main()
{
}