#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[20] = "Mahendra Suthar";
    int n = strlen(c);
    char temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = c[i];
        c[i] = c[n - i - 1];
        c[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << c[i];
    }

    return 0;
}