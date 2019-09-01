#include<iostream>
using namespace std;
long long fibonacci_modefied(long long t1,long long t2,long long n){
      long long dp[10000]={};
      dp[0]=t1,dp[1]=t2;
      for(int i=2;i<=n;i++){
          dp[i]=dp[i-2]+dp[i-1]*dp[i-1];
      }
      return dp[n-1];
}
int main(){
    long long t1,t2,n;
    cin>>t1>>t2>>n;
    cout<<fibonacci_modefied(t1,t2,n);
    return 0;
}
