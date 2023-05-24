#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    friend complex ans(complex p,complex q);
    void set(int x,int y){
        a=x;
        b=y;
    }
    void get(){
        cout<<"The complex number is"<<a<<"+"<<b<<"i"<<endl;
    }

};

complex ans(complex p,complex q){
    complex r;
    r.set((p.a+p.b),(q.a+q.b));
    return r;
}


int main(){
    complex c1,c2,sum;
    c1.set(3,3);
    c1.get();

    c2.set(3,3);
    c2.get();

    sum=ans(c1,c2);
    sum.get();
    
return 0;
}