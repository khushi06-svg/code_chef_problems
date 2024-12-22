#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,ns;
	    cin>>s;
	    for(int i=1;i<=n;i+=2){
	        if(s[i-1]=='0' && s[i]=='0'){
	            ns=ns+"A";
	        }else if(s[i-1]=='0' && s[i]=='1'){
	            ns=ns+"T";
	        }else if(s[i-1]=='1' && s[i]=='0'){
	            ns=ns+"C";
	        }else if(s[i-1]=='1' && s[i]=='1'){
	            ns=ns+"G";
	       
	        }
	         
	    }cout<<ns<<endl;
	}
	return 0;
    
}
