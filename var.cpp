#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i>t;i++){
	    int x;
	    cin>>x;
        if(x%25==0){
            cout<<(x/25)<<endl;
        }
        else{
            cout<<(x/25)+1<<endl;
        }
	    
	    
	}
	return 0;
}
