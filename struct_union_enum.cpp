//.1)Structure:-used to store different data type
// struct name{   data    }
// typedef is nothing but if we want to say in short of the word employee and someone names we can say ep

// #include<iostream>
// using namespace std;
// struct employee
// {
//     int eId;
//     char var;
//     float salary;
// };

// int main(){
//     struct employee harry;
//     harry.eId=1;
//     harry.var='v';
//     harry.salary=12357890;

//     cout<<"the value is "<<harry.eId<<endl;
//     cout<<"the value is "<<harry.var<<endl;
//     cout<<"the value is "<<harry.salary<<endl;

// return 0;
// }

//****8
//.2)unions:-it print only single value at a time othrerwise it overload the value
// #include<iostream>
// using namespace std;
// typedef struct employee
// {
//     int eId;
//     char var;
//     float salary;
// }ep;

// union money{
//     int rate;
//     char car;
//     float pounds;
// };

// int main(){
//     ep harry;
//     union money m1;
//     m1.rate=45;
//     m1.car='c';
//     m1.pounds=456;
//     cout<<m1.rate;

// return 0;
// }

//.3)enum:- user defined datatype
// #include<iostream>
// using namespace std;
// enum directions{North,South,East,West};
// int main(){
//     directions direction;
//     direction=East;
//     cout<<"Direction:"<<direction<<endl;
//     cout<<"Direction:"<<direction+1<<endl;
// return 0;
// }

// one more example of enum
//  #include<iostream>
//  using namespace std;
//  enum favcolor{red,yello,blue,black,orange};

// int main(){
//     favcolor mycolor;
//     mycolor=blue;
//     cout<<mycolor<<endl;

// return 0;
// }

// onr enum eg
//  #include<iostream>
//  using namespace std;
//  enum birds{parrot=3,eagel,peacock,crow};

// int main(){
//     birds myfav;
//     myfav=eagel;
//     cout<<myfav;
// return 0;
// }
