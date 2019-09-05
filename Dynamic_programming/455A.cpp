#include<iostream>
using namespace std;
long long dp[10000000],c[10000000];
long long boredom(long long i){
      dp[0]=0,dp[1]=c[1];
      for(int j=2;j<=i;j++){
          dp[j]=max(dp[j-1],dp[j-2]+j*c[j]);
      }
      return dp[i];
}
int main(){
    long long n,x,m=0;
    cin>>n;
    for(long long i=0;i<n;i++){
       cin>>x;
       c[x]++;
       m=max(m,x);
    }
    for(long long i=0;i<=n;i++)
       dp[i]=-1;
    cout<<boredom(m)<<endl;
    return 0;
}
