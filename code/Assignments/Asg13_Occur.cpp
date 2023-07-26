#include<iostream>
using namespace std;

int main()
{
    char c[10];
    cin >> c;
    int occured = 0;

    for(int i = 0;i<10;i++)
    {
        if(c[i] == 'a')
        {
            occured++;
        }
    }
    cout << "a is occured in the given string " << occured << " times";
    return 0;
}