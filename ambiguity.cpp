// #include<iostream>
// using namespace std;

// class A{
//     public:
//     void greet(){
//         cout<<"Hi ,i am varsha"<<'\n';
//     }
// };

// class B{
//     public:
//         void greet(){
//             cout<<"I am in pict"<<'\n';
//         }
    


// };

// class derived:public A,public B{
//     public:
//     int a;
//     void greet(){
//         cout<<"nice to meet you"<<'\n';
//         A::greet();
//         B::greet();
//     }
// };

// int main(){
//     A obj1;
//     obj1.greet();

//     B obj2;
//     obj2.greet();

//     derived obj3;
//     obj3.greet();
    
// return 0;
// }

#include<iostream>
using namespace std;

int main(){

    int n;
    int rev=0;
    cout<<"Enter the value of n:"<<'\n';
    cin>>n;
    int temp=n;
    while(temp!=0){
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    cout<<"The reverse of :"<<n<<"is :"<<rev<<'\n';
    
return 0;
}