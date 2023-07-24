#include<iostream>
using namespace std;

class Circle
{
    private:
        float pi = 3.14;
        int area;
        int radius;
        int circumference;
        int diameter;
    public:
        void getRadius()
        {
            cout << "Enter value for radius: ";
            cin >> radius;
        }
        void getArea()
        {
            return pi * radius*radius;
        }
}
int main()
{

}