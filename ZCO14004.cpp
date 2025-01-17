#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
int main(){
    int n;
    cin >> n;
    vector<ll> array(n);
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> array[i];
        sum += array[i];
    }
    vector<ll> dp(n);
    dp[0] = array[0];
    dp[1] = array[1];
    dp[2] = array[2];
    for (int i = 3; i < n; i++){
        dp[i] = array[i] + min(dp[i-1], min(dp[i-2], dp[i-3]));
    }
    cout << sum - min(dp[n-1], min(dp[n-2], dp[n-3])) << endl;
    return 0;
}

