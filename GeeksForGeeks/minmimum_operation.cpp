#include<iostream>
#include<climits>
using namespace std;
int dp[1000];
int minimum_operation(int num){
    int q1=INT_MAX,q2=INT_MAX;
    if(num<=0)
       return 0;
    else if(dp[num]!=-1)
        return dp[num];
    else if(num%2==0){
         q1=1+minimum_operation(num/2);
    }
    else{
         q2=1+minimum_operation(num-1);
    }
    int ans=min(q1,q2);
    dp[num]=ans;
    return ans;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int num;
       cin>>num;
       for(int i=0;i<=num;i++)
           dp[i]=-1;
       cout<<minimum_operation(num)<<endl;
   }
   return 0;
}
