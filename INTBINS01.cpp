#include <bits/stdc++.h>
using namespace std;
long long t,n,q,a[100005],ans[100005];
vector<pair<long long,long long>> v;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>q;
        v.clear();
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n);
        for(int i=1;i<=q;i++){
            int x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        long long cur=0;
        long long pre=0,sum=0;
        for(int i=1;;i++){
            long long fi=v[cur].first;
            while(a[i]<fi and i<=n){
                sum+=(fi-a[i]);
                i++;
            }
            i--;
            while(sum>pre){
                pre++;
                sum-=(fi-a[pre]);
            }
            ans[v[cur].second]=n-pre;
            if(cur==q-1) break;
            sum+=(i-pre)*(v[cur+1].first-fi);
            cur++;
        }
        for(int i=1;i<=q;i++) cout<<ans[i]<<'\n';
    }
}
