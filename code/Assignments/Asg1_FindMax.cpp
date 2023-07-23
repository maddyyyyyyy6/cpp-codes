#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    // as we have to use if else conditions
    if(a > b)
    {
        cout << "a is maximum";
    }
    else{
        cout << "b is maximum";
    }
    return 0;
}
