#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    
    Number(){
        a=0;
    }
    Number(int x){
        a=x;  
    }
//when no copy constructor is found compiler supplies its own cnstructor
    Number(Number &obj){
        cout<<"The copy constructor is invoked "<<endl;
        a=obj.a;    
    }

    void display(){
        cout<<"The value of the Number is "<<a<<endl;
    }

};

int main(){
    Number x,y,z(7);
    x.display();
    y.display();
    z.display();
//copy constructor invoke
    Number z1(x);
    z1.display();
    Number z3=z;

    Number z2(z);
    z2.display();


    return 0;}



