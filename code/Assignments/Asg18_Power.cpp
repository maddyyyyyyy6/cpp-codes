#include <iostream>
using namespace std;
void power(int b, int i);
int main()
{
    int x, y;
    cout << "Enter value of x = ";
    cin >> x;
    cout << "Enter value of power(y) = ";
    cin >> y;
    power(x, y);

    return 0;
}

void power(int b, int i)
{
    int power = b;

    for (int j = 1; j < i; j++)
    {
        power = power * b;
    }
    cout << "Power of " << b << " " << i << " is " << power;
}