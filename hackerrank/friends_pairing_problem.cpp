#include<iostream>
using namespace std;
int dp[1000];
int count_friend_pairing(int n){
     if(dp[n]!=-1)
         return dp[n];
     else if(n>2){
         dp[n]=count_friend_pairing(n-1)+(n-1)*count_friend_pairing(n-2);
     }
     else{
          dp[n]=n;
     }
     return dp[n];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    cout<<count_friend_pairing(n)<<endl;
    return 0;
}
