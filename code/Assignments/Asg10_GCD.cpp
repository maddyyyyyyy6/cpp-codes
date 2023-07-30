#include <iostream>
using namespace std;

class GCD
{
    private:
        int x,y,gcd;
    public:
        void getValues()
        {
            cout << "Enter the value of two Numbers: ";
            cin >> x >> y;
        }
        void getGCD()
        {
			
            int n = (x < y) ? x : y;
            for (int i = 2; i <= n; i++)
            {
                if (x % i == 0 && y % i == 0)
                {
                    gcd = i;
                    // cout << "This is the GCD of both " << i << endl;
                }
                else
                {
					// do nothing
                }
            }
			cout << "GCD of " << x << " and " << y << " is "<< gcd;
		}
};
            

int main()
{
    	GCD g;
	g.getValues();
	g.getGCD();

    return 0;
}
