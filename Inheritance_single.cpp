// #include<iostream>
// using namespace std;

// class Employee{
//     public :
//     int id;
//     float salary;
//         Employee(int inputid){
//         id=inputid;
//         salary=24.0;
//     }
//         Employee(){}

// };

// //class programmer:Employee{                        //also possible if we want to print id
//     class programmer: public Employee{
//     public:
//     int languagecode;
//     programmer(int outputid){
//         id=outputid;
//         languagecode=9;
//     }
    
//     void getdata(){
//         cout<<"The id of employee class is:"<<id<<endl;
//     }
// };

// int main(){
//     Employee harray(1),varsha(3);
//      cout<<"Salary of harray: "<<harray.salary<<endl;
//      cout<<"Salary of varsha: "<<varsha.salary<<endl;

//      programmer sid(3);
//      cout<<"languagecode: "<<sid.languagecode<<endl;
//      sid.getdata();
//      cout<<sid.id<<endl;
    
// return 0;
// }


#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
     int array[n];
     for(int i=0;i<n;i++){
            cin>>array[i];
     }

        int max_no=INT_MIN;
        int min_no=INT_MAX;

    for(int i=0;i<n;i++){
        min_no=min(min_no,array[i]);
        max_no=max(max_no,array[i]);
    }

    cout<<min_no<<" , "<<max_no<<endl;
     
    

return 0;
}