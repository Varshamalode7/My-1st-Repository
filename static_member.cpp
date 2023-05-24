#include <iostream>
using namespace std;

class employee
{

    int Id;
    static int count;//if you dont want to write static  then write this
    //int count=0;

public:
    void setdata(void)
    {
        cout << "enter the id is" << endl;
        cin >> Id;
        count++;
    }
    void getdata(void)
    {
        cout << "Enter the id  " << Id << endl
             << "this Id number is  " << Id << " and count is " << count << endl;
    }
};
int employee::count;  //if count static is not written then do not consider this line

int main()
{
    employee object;
    object.setdata();
    object.getdata();

    return 0;
}