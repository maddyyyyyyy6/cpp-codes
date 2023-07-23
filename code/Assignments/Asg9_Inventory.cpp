#include <iostream>
using namespace std;

class Inventory
{
private:
    int no_of_items;
    int priceOfOne;
    int totalPrice;

public:
    void getNumberOfItems(int items)
    {
        no_of_items = items;
    }

    void getPriceOfEachItem(int price)
    {
        priceOfOne = price;
    }

    void putTotalPrice()
    {
        totalPrice = no_of_items * priceOfOne;
        cout << "Your Total price for " << no_of_items << " is " << totalPrice;
    }
} int main()
{
    Inventory library;
    library.getNumberOfItems(10);
    library.getPriceOfEachItem(65);
    library.putTotalPrice();

    return 0;
}