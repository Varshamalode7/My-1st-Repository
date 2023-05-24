//default constructor as it takes no parameter
// #include<iostream>
// using namespace std;

// class complex{                  //creation of class
//     int a,b;
//     public:
//     complex(void);              //creation of  default constructor using class name//constructor is declared here
//         void get(){
//             cout<<"the value of complex num is: "<<a<<"+"<<b<<"i"<<endl;

//         }
// };

// complex::complex(void){                 //define the constructor
//     a=21;
//     b=3;
// }

// int main(){
//     complex c1;
//     c1.get();
    
// return 0;
// }



//parameterized constructor as it takes the parameter 
// #include<iostream>
// using namespace std;

// class complex{
//     int a,b;
//     public:
//     complex(int,int);
//     void get(){
//         cout<<"The value of complex num is: "<<a<<"+"<<b<<"i"<<endl;
//     }

// };

// complex::complex(int x,int y){
//     a=x;
//     b=y;
// }

// int main(){
//     //implicit call
//     complex c(5,7);
//     c.get();

//     //explicit call
//     complex b=complex(5,8);
//     b.get();
    
// return 0;
// }



//points x and y using constructor
// #include<iostream>
// using namespace std;


// class point{
//     int x,y;
//     public:
//      point(int a,int b){
//         x=a;
//         y=b;
//     }
   
//     void display(){
//         cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//     }
// };

// int main(){
//     point p(1,4);
//     p.display();

//     point q(9,8);
//     q.display();
    
// return 0;
// }



//distance betwn two points using constructor
// #include<iostream>
// #include<cmath>
// using namespace std;

// class point{
//     int x,y;
// friend void distance(point,point);
// public:
   
//     point(int a,int b){
//         x=a;
//         y=b;
//     }
//     void display(){
//         cout<<"The points are("<<x<<","<<y<<")"<<endl;
//             }
// };
// void distance (point p1,point p2){
//     int x_diff = (p2.x - p1.x);
//     int y_diff = (p2.y - p1.y);
//     int diff=sqrt(pow(x_diff,2)+pow(y_diff,2));
//     cout<<"The distance is "<<diff<<endl;
// }


// int main(){
//     point p(1,2);
//     point q(4,6);

//     point c(1,1);
//     point d(1,1);

//     point e(1,0);
//     point f(70,0);

//     distance(p,q);
//     distance(c,d);
//     distance(e,f);
//     return 0;
// }


//many constructor
// #include<iostream>
// using namespace std;

// class constructor{
//     int a,b;
//     public:
//     constructor(){          //default constructor
//         a=0;
//         b=0;
//     }

//     constructor(int x){
//     a=x;
//     b=0;
//     }

//     constructor(int x,int y){
//         a=x;
//         b=y;
//     }

//     void get(){
//         cout<<"The complex num is: "<<a<<"+"<<b<<"i"<<endl;
//     }
// };

// int main(){
//     constructor c1;
//     c1.get();

//     constructor c2(3);
//     c2.get();

//     constructor c3(9,7);
//     c3.get();
    
// return 0;
// }



//default argument
// #include<iostream>
// using namespace std;

// class simple{
//     int data1,data2,data3;
//     public:
//     simple (int a,int b=9,int c=4){
//         data1=a;
//         data2=b;
//         data3=c;
//     }
//     void get();

// };
//  void simple::get(){
//     cout<<"The value of data1 , data2 and data3 are " << data1 <<" , "<< data2 <<" and "<< data3<<endl;
// }

// int main(){
//     simple c1(12);
//     c1.get();

//     simple c2(12,13);
//     c2.get();

//     simple c3(12,45,78);
//     c3.get();
    
// return 0;
// }