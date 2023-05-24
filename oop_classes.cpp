#include <iostream>
using namespace std;

class student
{        // creation of class
private: // access specifier
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // declared
    void getdata()
    { // function
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
        cout << "the value of c is:" << c << endl;
        cout << "the value of d is:" << d << endl;
        cout << "the value of e is:" << e << endl;
    }
};

void student::setdata(int a1, int b1, int c1)
{ // define the declaration function
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student varsha; // creation of class object
    // varsha.a=10;                                    //throw error as a is private it cannot access outside the class
    varsha.d = 9;
    varsha.e = 8;
    varsha.setdata(3, 6, 7);
    varsha.getdata();

    return 0;
}