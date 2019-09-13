#include<iostream>
using namespace std;
long long count_string(long long n){
     long long dp[1000]={-1};
     dp[0]=1;dp[1]=2;
     for(long long i=2;i<=n;i++){
          dp[i]=dp[i-1]+dp[i-2];
     }
     return dp[n];
}
int main(){
     long long t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         cout<<count_string(n)<<endl;
     }
     return 0;
}
