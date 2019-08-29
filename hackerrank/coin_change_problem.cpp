#include<bits/stdc++.h>
using namespace std;
const long long N=1e3;
long long A[N],n;
long long vis[N][N],dp[N][N];
long long fasterways(long long pos,long long s){
    if(pos==n)
        return s==0;
    if(s<0)
        return 0;
    long long &ans=dp[pos][s];
    if(vis[pos][s])
       return ans;
    vis[pos][s]=1;
    ans=0;
    ans=fasterways(pos,s-A[pos])+fasterways(pos+1,s);
    return ans;
}
int main(){
    long long i,s;
    cin>>s>>n;
    for(i=0;i<n;i++)
        cin>>A[i];
    cout<<fasterways(0,s)<<endl;
}
