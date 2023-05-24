#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "Enter Id of ypur item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "price of item with Id " << itemId[i] << "is" << itemprice[i] << endl;
    }
}

int main()
{
    shop object;
    object.initcounter();
    object.setprice();
    object.displayprice();

    return 0;
}