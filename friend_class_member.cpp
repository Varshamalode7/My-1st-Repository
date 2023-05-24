#include <iostream>
using namespace std;
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);

};

class complex
{
    int a, b;
    //for individually
    //friend int calculator::sumrealcomplex(complex, complex);
    //friend int calculator::sumimgcomplex(complex, complex);

    //aliter declaration of friend function
    friend class calculator;
public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator:: sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.set(1, 4);
    c2.set(5, 7);
    c1.get();
    c2.get();
    calculator calc;
    int result = calc.sumrealcomplex(c1,c2);
    cout << "the sum of real part q,p is: " << result << endl;
    int resultimg = calc.sumimgcomplex(c1,c2);
    cout << "the sum of img part q,p is: " << resultimg << endl;
    
    return 0;
}