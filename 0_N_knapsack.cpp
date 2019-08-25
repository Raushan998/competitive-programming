#include<iostream>
using namespace std;
int profit[100],weight[100];
int knap_sack(int capacity,int num){
    int dp[capacity+1]={0};
    int i=0,j=0;
    for(i=0;i<=capacity;i++){
        for(j=0;j<num;j++){
            if(weight[j]<=i)
               dp[i]=max(dp[i],dp[i-weight[j]]+profit[j]);
        }
    }
    return dp[capacity];
}
int main(){
    int num,capacity;
    cin>>num>>capacity;
    for(int i=0;i<num;i++){
        cin>>weight[i];
    }
    for(int i=0;i<num;i++)
        cin>>profit[i];
    //cout<<"hell0"<<endl;
    cout<<knap_sack(capacity,num)<<endl;
    return 0;
}
