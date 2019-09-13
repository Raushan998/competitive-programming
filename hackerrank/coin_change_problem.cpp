#include<iostream>
using namespace std;
int dp[1000][1000]={-1};
int coin_change(int arr[],int capacity,int num){
    if(capacity==0)
        return 1;
    if(capacity<0)
       return 0;
    if(capacity>0 && num<0)
        return 0;
    if(dp[num][capacity]!=-1){
        return dp[num][capacity];
    }
    dp[num][capacity]=coin_change(arr,capacity,num-1)+coin_change(arr,capacity-arr[num-1],num);
}
int main(){
    int capacity,n;
    cin>>capacity>>n;
    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];
   for(int i=0;i<n+1;i++){
      for(int j=0;j<=capacity;j++)
          dp[i][j]=-1;
   }
   cout<<coin_change(arr,capacity,n)<<endl;
    return 0;
}
