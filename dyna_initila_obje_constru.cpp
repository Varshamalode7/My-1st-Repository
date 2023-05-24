#include<iostream>
using namespace std;


class Bankdeposit{
    int principal;
    int year;
    float intrest;
    float returnvalue;

    public:
    Bankdeposit(){}
    Bankdeposit(int x,int y,float r);
    Bankdeposit(int x, int y,int R);

    void show();

};
Bankdeposit::Bankdeposit(int x,int y,float r){
    principal=x;
    year=y;
    intrest=r;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+intrest);
    }
}
Bankdeposit::Bankdeposit(int x,int y,int r){
    principal=x;
    year=y;
    intrest= float(r)/100;
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(1+intrest);
    }
}

 void Bankdeposit::show(){
    cout<<"Principal amount was "<<principal<< " return value after "<<year<< " is "<<returnvalue<<endl;
}

int main(){
    Bankdeposit bank1,bank2,bank3;
    int x,y;
    float r;
    int R;
    cout<<"Enter the value of x,y,r"<<endl;
    cin>>x>>y>>r;
    bank1=Bankdeposit(x,y,r);
    bank1.show();

    cout<<"Enter the value of x,y,R"<<endl;
    cin>>x>>y>>R;
    bank2=Bankdeposit(x,y,R);
    bank2.show();

    bank3.show();
return 0;
}