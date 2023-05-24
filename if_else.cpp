// control structure:if else and switch case statement
// 1. selection control structure if else statement:

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=0;i<3;i++){
//     if (i<3){
//         cout<<i<<endl;}
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if((age<18)&&(age>0)){
//         cout<<"you cannot vote"<<endl;
//     }
//     else if(age==18){
//         cout<<"you have to wait"<<endl;
//     }
//     else if(age<1){
//         cout<<"yiou are not born"<<endl;
//     }
//     else{
//         cout<<"you can vote"<<endl;
//     }
//     return 0;
//}

//***2.switch case***
// #include <iostream >
// using namespace std;

// int main(){
//     int age;
//     cin>>age;
//     switch (age)

//     {
//     case 7:
//         cout<<"you are 18"<<endl;
//         break;
//     case 9:
//     cout<<"you are not 18"<<endl;
//         break;
//     default:
//         cout<<"no special age cases"<<endl;
//         break;
//     }

//     return 0;
// }

// 3.variable can chance
//  # include <iostream>
//  using namespace std;
//  int main(){
//      int a=34;
//      char c='c';
//      cout<<"The value of a is:"<<a<<endl;
//      cout<<"The value of c is:"<<c<<endl;
//      a=98;
//      c='4';
//      cout<<"value of a is:"<<a<<endl;
//      cout<<"The value of c is:"<<c<<endl;
//      return 0;
// }

// 4.(constant):variable value cannot change using constant
//   # include <iostream>
//   using namespace std;
//   int main(){
//      const int a=78;
//      cout<<"the value of a is :"<<a<<endl;
//      //a=43;error as a is constant
//      cout<<"the value of a:"<<a<<endl;
//      return 0;
//   }

// 4.manipulator:endl,setw(number)=which tell the space
//  #include<iostream>
//  #include<iomanip>//imp for setw need to write this
//  using namespace std;
//  int main(){
//      int a=7,b=9,c=293495;
//      cout<<"The value of a without setw is:"<<a<<endl;
//      cout<<"The value of b without setw is:"<<b<<endl;
//      cout<<"The value of c without setw is:"<<c<<endl;

//     cout<<"The value of a is:"<<setw(4)<<a<<endl;
//     cout<<"The value of b is:"<<setw(4)<<b<<endl;
//     cout<<"The value of c is:"<<setw(4)<<c<<endl;
//     return 0;
// }

// 5.operator precedence:(see on website en.cppreference)
// operation does not depend on the bodmas
// precedence=which operator will evaluate first
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int a=3,b=4;
//      int c=(a*5)+b;
//  //int c=((((a*5)+b)-45)+87);
//      cout<<c<<endl;
//      return 0;
//  }
