#include <iostream>
using namespace std;

int main()
{
    int factorial, result = 0;
    cout << "Factorial: ";
    cout << "Enter a value to factorial of it: ";
    cin >> factorial;

    for (int i = 1; i <= factorial; i++)
    {

        result = result + (i * i - 1);
    }
    cout << result;
    return 0;
}
