//this classes are in #include<fstream>header file

// classes foe working with files:
// fstreambase
// ifstream--->derived from fstreambase
// ofstream--->derived from ostreambase

// there are 2 ways to open the file
// 1)using the constructor
// 2_using the member function oprn() of the class



//****** code to read  the code in another file*****
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="varsha malode CE branch";
     //fout is the object of ofstream class
    //opening the files using the constructor and reading to it
    //ofstream is the class which is already declared when header file fstream is declared
    //ofstream fout("samplefile.txt");//to read the code
   // fout<<st;
    
return 0;
}


//****  code to write the code in another file*****
// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     string st="varsha malode CE branch";
//     string st2;
//     //fin is the object of ifstream class
//     //opening the files using the constructor and reading it
//     //ofstream is the class which is already declared when header file fstream is declared
//     ifstream fin("samplefile.txt");//to read thecode
//     //fin>>st2;
//     getline(fin,st2);
//     cout<<st2<<endl;
//     getline(fin,st2);
//     cout<<st2<<endl;

//     //when you run the code only varsha is print but if
//     //you want to print the whole sentence then usedthe getline function 
//     //instead of fin>>st2

    
// return 0;
// }