#include<iostream>
#include<climits>
using namespace std;
//long SIZE =1e9;
typedef long long dp[100000000];
long long hit_lottery(long long num){
     if(num==0)
        return 0;
     if(dp[num]!=-1){
         return dp[num];
     }
     long long q1=INT_MAX,q2=INT_MAX,q3=INT_MAX,q4=INT_MAX,q5=INT_MAX;
     if(num>=100){
          q5=1+hit_lottery(num-100);
     }
      if(num>=20){
          q4=1+hit_lottery(num-20);
     }
     if(num>=10){
        q3=1+hit_lottery(num-10);
     }
     if(num>=5){
         q2=1+hit_lottery(num-5);
     }
     if(num>=1){
         q1=1+hit_lottery(num-1);
     }
     long long ans=min(q1,min(q2,min(q3,min(q4,q5))));
     dp[num]=ans;
     return ans;
}
int main(){
    long long num;
    cin>>num;
    for(long long i=0;i<=num;i++)
       dp[i]=-1;
    cout<<hit_lottery(num)<<endl;
    return 0;
}
