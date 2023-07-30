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
        return diameter = 2 * radius;
    }

    void area()
    {
        area = pi * radius * radius;
        cout << "Area of the circle with radius: " << radius << " is " << area;
    }
    void circum()
    {
        circumference = 2 * pi * radius;
        cout << "Circumference of the circle with radius: " << radius << " is " << circumference;
    }
} int main()
{
    Circle c;
    c.getRadius(20);
    c.area();
    c.circum();
    return 0;
}







// new code for assignment with corrections

#include <iostream>
using namespace std;

class Circle
{
private:
    float pi = 3.14;
    float Area;
    float radius;
    float circumference;

public:
    void getRadius()
    {
        cout << "Enter value for radius: ";
        cin >> radius;
    }

    void area()
    {
        Area = pi * radius * radius;
        cout << "Area of the circle with radius: " << radius << " is " << Area << endl;
    }
    void circum()
    {
        circumference = 2 * pi * radius;
        cout << "Circumference of the circle with radius: " << radius << " is " << circumference << endl;
    }
};
int main()
{
    Circle c;
    c.getRadius();
    c.area();
    c.circum();
    return 0;
}
