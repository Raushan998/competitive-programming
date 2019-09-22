#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long dp[100000];
long long longest_subsequence(long long arr[],long long n){
  for(int i=0;i<n;i++){
    dp[i]=1;
  }
  long long best=-1;
  for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
      if(arr[j]>arr[i]){
        long long cur=1+dp[j];
        dp[i]=max(cur,dp[i]);
      }
    }
    best=max(best,dp[i]);
  }
  return best;
}

int main() {
    long long t;
    cin>>t;
    long long arr[1000000];
    for(long long i=0;i<t;i++)
        cin>>arr[i];
    cout<<longest_subsequence(arr,t);
    return 0;
}
