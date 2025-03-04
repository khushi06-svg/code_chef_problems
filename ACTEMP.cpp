#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,a,b,c;
	cin >>t;
	while(t) {
	    cin >>a>>b>>c;
	    int x = max(a,c);
	    if(x<=b) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	    t--;
	}
	return 0;
}
