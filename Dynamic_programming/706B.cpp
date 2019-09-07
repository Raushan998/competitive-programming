#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long dp[100000];
    long long arr[100000];
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    sort(arr,arr+n);
    long long q;
    cin>>q;
    while(q--){
        long long m;
        cin>>m;
        cout<<upper_bound(arr,arr+n,m)-arr<<endl;
    }
}
