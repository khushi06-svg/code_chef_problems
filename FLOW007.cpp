// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<iostream>
using namespace std;
int main(){
    int t,num;
    std::cin >> t;
    while(t--){
        std::cin >> num;
        int rev=0;
        while(num!=0){
            rev=num%10+rev*10;
            num/=10;
        }
        std::cout << rev << std::endl;
    }

    return 0;
}
