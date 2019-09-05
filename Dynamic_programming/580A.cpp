#include<iostream>
using namespace std;
int main(){
    long long dp[1000000];
    long long ans,ml=1,l=1;
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
        cin>>dp[i];
    long long i=0;
    for(i=1;i<n;i++){
        if(dp[i]>=dp[i-1]){
           l++;
            ml=max(ml,l);
        }
        else
           l=1;
    }
    cout<<ml<<endl;
    return 0;
}
