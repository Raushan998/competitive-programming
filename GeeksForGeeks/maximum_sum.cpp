#include<bits/stdc++.h>
using namespace std;
int memo[1000];
int maximum_sum(int n){
    if(n==1 || n==0){
        return n;
    }
    if(memo[n]!=-1)
        return memo[n];
    int ans=max((maximum_sum(n/2)+maximum_sum(n/3)+maximum_sum(n/4)),n);
    memo[n]=ans;
    return ans;
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
        memo[i]=-1;
    cout<<maximum_sum(n)<<endl;
    return 0;
}


