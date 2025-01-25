#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    c=a+b;
	    int d=0;
	    for(int i=1 ; i<=c ; i++){
	        if(c%i==0)
	        d++;
	    }
	    if(d==2)
	    cout<<"Alice\n";
	    else
	    cout<<"Bob\n";
	}
	return 0;
}
