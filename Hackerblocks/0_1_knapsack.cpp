#include<iostream>
using namespace std;
int dp[1000][1000];
int knapsack(int n,int W,int wt[],int val[]){
    int ans;
    if(n==0 || W==0)
        return 0;
    else if(dp[n][W]!=-1)
        return dp[n][W];
    else if(wt[n-1]>=W){
        ans=knapsack(n-1,W,wt,val);
    }
    else{
        ans=max(val[n-1]+knapsack(n-1,W-wt[n-1],wt,val),knapsack(n-1,W,wt,val));
    }
    dp[n][W]=ans;
    return ans;
}
int main(){
    int N,W;
    cin>>N>>W;
    int weight[N],val[N];
    for(int i=0;i<N;i++)
        cin>>weight[i];
    for(int i=0;i<N;i++)
        cin>>val[i];
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++)
           dp[i][j]=-1;
    }
    cout<<knapsack(N,W,weight,val)<<endl;
    return 0;
}
