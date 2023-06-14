#include <iostream>
using namespace std;
int main()
{
    int fin;
    cout << "Enter Number to find: between 0 to 19 " << endl;
    cin >> fin;

    int a[15] = {3, 4, 5, 6, 7, 8, 9, 10, 12, 14, 15, 16, 17, 18, 19};
    cout << "BINARY SEARCHING" << endl;
    cout << "Finding No." << fin << endl;
    int len = *(&a + 1) - a;
    int stin = 0;
    int edin = len - 1;
    int mdin = stin + edin / 2;

    // to find 7;
    // check if right or left of mdin
    for (int i = 0; i < len; i++)
    {
        if (fin == a[mdin])
        {
            cout << "Found: " << fin << " at index -> " << mdin << endl;
            break;
        }
        else if (stin < edin)
        {

            if (fin < a[mdin])
            {
                // cout << "It is Smaller "
                //      << " st: " << stin << " edin: " << edin << endl;
                cout << "Number: " << fin << " is less than " << a[mdin] << endl;
                edin = mdin - 1;
                mdin = (stin + edin) / 2;
            }
            else if (fin > a[mdin])
            {
                // cout << "It is Bigger "
                //      << " st: " << stin << " edin: " << edin << endl;
                cout << "Number: " << fin << " is greater than " << a[mdin] << endl;

            stin = mdin + 1;
            mdin = (stin + edin) / 2;
        }
        else
        {
            cout << "Not Found!";
        }
    }

    return 0;
}