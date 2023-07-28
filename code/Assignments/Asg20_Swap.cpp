#include <iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
    int x = 6, y = 7;
    cout << "Values before" << endl;
    cout << x << " " << y << endl;
    swap(x, y);
    cout << "Values after" << endl;
    cout << x << " " << y << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}