#include<iostream>
using namespace std;
int construct_array(int n,int k,int x){
     int dp[n+1][2];
     if(x==1){
         dp[0][0]=1;
     }
     else{
         dp[0][1]=0;
     }
     if(x==1){
         dp[1][0]=0;
         dp[1][1]=k-1;
     }
     else{
          dp[1][0]=1;
          dp[1][1]=k-2;
     }
     for(int i=2;i<n;i++){
         dp[i][0]=dp[i-1][1];
         dp[i][1]=dp[i-1][0]*(k-1)+dp[i-1][1]*(k-2);
     }
     return dp[n-1][0];
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    cout<<construct_array(n,k,x)<<endl;
}
