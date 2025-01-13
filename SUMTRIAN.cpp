#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
ll f(int n,vector<vector<ll>> &a,int i,int j,vector<vector<ll>> &dp)
{
    if(i==n-1)
        return a[n-1][j];
    if(dp[i][j]!=-1) return dp[i][j];
    
    ll down=a[i][j]+f(n,a,i+1,j,dp);
    ll diag=a[i][j]+f(n,a,i+1,j+1,dp);
    return dp[i][j]=max(down,diag);
}

int main() {
    ll t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<ll>> a(n,vector<ll> (n));
        vector<vector<ll>> dp(n,vector<ll> (n,-1));

        for(int i=0;i<n; i++){
            for(int j=0;j<=i;j++)
            {
                cin>>a[i][j];
            }
                    
        }

        cout<<f(n,a,0,0,dp)<<endl;
        
    }
    
    return 0;
}
