#include<iostream>
#include<climits>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long  arr[100000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long dp[100000];
    int j=0;
    for(int i=0;i<k;i++){
        dp[j]+=arr[i];
    }
    int minimum=j;
    j++;
    for(int i=k;i<n;i++){
        dp[j]=dp[j-1]-arr[i-k]+arr[i];
        if(dp[minimum]>dp[j])
            minimum=j;
        j++;
    }
    cout<<minimum+1<<endl;
    return 0;
}
