#include <iostream>
using namespace std;

int main()
{
    char c[20] = "he he qe qwer qw hi";
    int words = 0;

    for (int i = 0; i < 20; i++)
    {
        if (c[i] == ' ')
        {
            words++;
        }
    }
    cout << "Total no. of words in the given sentence is : " << words + 1 << endl;
    return 0;
}