#include<iostream>
using namespace std;
long long sherlock_and_cost(long long a[],int N){
      long long dp[N][2];
      for(int i=0;i<N;i++){
          dp[i][0]=dp[i][1]=0;
      }
      for(int i=0;i<(N-1);i++){
            dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(1-a[i]));
            dp[i+1][1]=max(dp[i][0]+abs(1-a[i+1]),dp[i][1]+abs(a[i]-a[i+1]));
      }
      return max(dp[N-1][0],dp[N-1][1]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         long long a[10000];
         for(int i=0;i<n;i++)
             cin>>a[i];
         cout<<sherlock_and_cost(a,n)<<endl;
    }
    return 0;
}
