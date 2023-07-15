#include <iostream>
using namespace std;

int main()
{
    // variable for Array
    // for n value to find
    int a[10] = {12, 23, 45, 67, 89, 14, 1637, 96, 56, 34};
    int n = 2;
    int l;
    bool isFound = false;

    for (int i = 0; i < 10; i++)
    {
        if (n == a[i])
        {
            isFound = true;
            l = i;
        }
    }
    isFound ? cout << "n is found at: " << l : cout << "n does not exist!";
    return 0;
}