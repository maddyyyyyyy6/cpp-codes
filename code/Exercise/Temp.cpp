#include <iostream>
using namespace std;
class Temperature
{
private:
    float F, C;

public:
    void convertFahtoCel()
    {

        cout << "Enter the Fahrenheit value: ";
        cin >> F;

        C = (0.555) * (F - 32.00);
        cout << F << " Fahrenheit is " << C << " Celsius" << endl;
    }
};

int main()
{
    Temperature t;
    t.convertFahtoCel();
    return 0;
}