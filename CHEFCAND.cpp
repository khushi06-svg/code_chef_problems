#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if(x>=n){
	        cout<<0<<endl;
	    }else{
	        cout<<(n-x+3)/4<<endl;
	    }
	}
	return 0;
}
