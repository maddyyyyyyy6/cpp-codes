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
            t = t * i;
        }

        cout << t << endl;
    }

}

int main()
{
    Factorial fact;
    fact.getFactorial(10);
    fact.getFactorial(5);
    return 0;
}
