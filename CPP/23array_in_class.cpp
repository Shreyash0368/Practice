#include <iostream>

using namespace std;

class Shop
{
private:
    int ItemID[20];
    int ItemPrice[20];
    int counter;

public:
    void intCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the ID of the item no." << counter << endl;
    cin >> ItemID[counter];
    cout << "Enter the price of the item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item ID " << ItemID[i] << " is " << ItemPrice[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    Shop LULU;
    LULU.intCounter();
    LULU.setPrice();
    LULU.setPrice();
    LULU.setPrice();
    LULU.displayPrice();

    return 0;
}