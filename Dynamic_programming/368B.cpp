#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long dp[100001]={0},arr[100001],dp1[100001]={0};
    int m,n;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(long long i=n;i>=1;i--){
        if(dp1[arr[i]]==0){
            dp[i]=1+dp[i+1];
            dp1[arr[i]]++;
        }
        else{
             dp[i]=dp[i+1];
        }
    }
    while(m--){
       int l;
       cin>>l;
       cout<<dp[l]<<endl;
    }
    return 0;
}
