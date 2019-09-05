#include<iostream>
#include<climits>
using namespace std;
long long dp[10000000];
long long cut_ribbon(long long n,long long a,long long b,long long c){
     if(n==0){
        return 0;
     }
     if(dp[n]!=-1)
         return dp[n];
     long long q1=INT_MIN,q2=INT_MIN,q3=INT_MIN;
     if(n>=a){
         q1=1+cut_ribbon(n-a,a,b,c);
     }
     if(n>=b){
         q2=1+cut_ribbon(n-b,a,b,c);
     }
     if(n>=c){
         q3=1+cut_ribbon(n-c,a,b,c);
     }
     long long ans=max(q1,max(q2,q3));
     dp[n]=ans;
     return ans;
}
int main(){
    long long n,a,b,c;
    cin>>n>>a>>b>>c;
    for(long long i=0;i<=n;i++){
        dp[i]=-1;
    }
    cout<<cut_ribbon(n,a,b,c);
}
