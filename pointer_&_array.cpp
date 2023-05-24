// 1)pointer:-data type which holds the address of other data types
// &:-address of operator or pass by refrence or assign the address of variable
// *:-derefrence operator
// #include<iostream>
// using namespace std;

// int main(){
//     int a=3;
//     int* b=&a;
//     // &:-assign the address of variable
//     cout<< "address of a is "<<&a<<endl;
//     cout<<"address of b is "<<b<<endl;

//     // *:-assign the value of variable
//     cout<<"the value of a is:"<<a<<endl;
//     cout<<"the value of b is:"<<*b<<endl;

//     //**:-pointer to pointer:it store the address of pointer of pointer
//     int **c=&b;
//     cout<<"the address of b is "<<&b<<endl;
//     cout<<"the address of b is "<<c<<endl;
//     cout<<"the  value at address c is "<<*c<<endl;
//     cout<<"the  value at address_value _at(value at c)is "<<**c<<endl;
//    return 0;
// }

// 2)Array:-used to score the value  of same data type
// syntax;
// #include<iostream>
// using namespace std;

// int main(){
//     int marks[4]={2,7,5,9};
//     int mathmarks[4];
//     mathmarks[0]=2;
//     mathmarks[1]=7;
//     mathmarks[2]=5;
//     mathmarks[3]=9;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//      cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;

//     //you can change the value of an array
//     marks[3]=120;
//     mathmarks[3]=980;
//     cout<<marks[3]<<endl;
//     cout<<mathmarks[3]<<endl;

// return 0;
// }

// 3)array using for loop
// #include<iostream>
// using namespace std;

// int main(){
//     int marks[4]={3,6,7,9};
//     for (int i = 0; i <4; i++)
//     {
//         cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
//     }

// return 0;
// }

// 4)array using while loop
//  #include<iostream>
//  using namespace std;

// int main(){
//     int i=0;
//     int marks[4]={3,6,7,9};
//     //int i=0
//     while(i<4){
//         cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
//         i++;
//         }
// return 0;
// }

// 5)array using do while loop
//  #include<iostream>
//  using namespace std;

// int main(){
//     int i=0;
//     int marks[4]={3,6,7,9};
//     do{
//         cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
//         i++;
//     }while(i<4);
// return 0;
// }

// 6)Array and pointer
// by naming the variable we can call the address
// formula:-new address=current address+i*size of(data type)
//  #include<iostream>
//  using namespace std;

// int main(){
//     int marks[4]={3,6,7,9};
//     for (int i = 0; i <4; i++)
//     {
//         cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;
//     }
//         int *p=marks;
//         cout<<*(p+1)<<endl;
//         cout<<*(++p)<<endl;
//         cout<<*(p++)<<endl;
//         //cout<<"The value of *p is "<<*p<<endl;
//         //cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//         //cout<<"The value of *(p+2) is "<<*(p+2)<<endl;

//         return 0;
//     }
