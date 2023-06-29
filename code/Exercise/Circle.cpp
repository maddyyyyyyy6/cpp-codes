#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;
    float area;
    const float pi = 3.14;

public:
    void inputRadius()
    {
        cout << "Enter the Radius πr^2: ";
        cin >> radius;
    }
    void getArea()
    {
        area = pi * getSquare(radius);
        cout << "Area of the Circle with Radius: " << radius << " is " << area << endl
             << endl
             << endl;
    }
    int getSquare(float r)
    {
        return r * r;
    }
};

int main()
{
    Circle c;
    c.inputRadius();
    c.getArea();
    return 0;
}