#include <iostream>
using namespace std;

int main()
{
    // bubble sort - sorting the elements of a array in a ascending order
    int a[10] = {412, 334, 212, 123, 4512, 3233, 142, 324, 111, 52};
    // int a[5] = {4, 1, 2, 3, 5};

    int current = 0, next = 1, tmp, i = 0, l = 0;
    while (true)
    {

        while (true)
        {

            // cout << a[i];
            // cout << " current -> " << current << endl;
            // cout << " next -> " << next << endl;
            if (a[current] > a[next])
            {
                tmp = a[next];
                a[next] = a[current];
                a[current] = tmp;
            }
            current = i + 1;
            next = i + 2;
            if (current == 9)
            {
                i = 0;
                current = 0;
                next = 1;
                break;
            }
            i++;
        }
        cout << "After sorting: round " << l << endl;

        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << endl;
        }
        if (l == 9)
        {
            break;
        }
        l++;
    }
    // cout << "After sorting: " << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << endl;
    // }

    return 0;
}