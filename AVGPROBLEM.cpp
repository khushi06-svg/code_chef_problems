#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float a,b,c;
	std::cin >> t;
	while(t--){
	    std::cin >> a>>b>>c;
	    string res=((a+b)/2)>c ? "Yes":"No";
	    std::cout << res << std::endl;
	    
	    
	}
	return 0;
}
