#include <iostream>
using namespace std;

class Factorial
{
private:
    int n;

public:
    void display()
    {
        //        this is a function
    }

    void getFactorial(int n)
    {
        int t = n;

        for (int i = t - 1; i >= 1; i--)
        {
            n = n * i;
        }

        cout << t << endl;
    }

}

int main()
{
    int get input from user
    return 0;
}