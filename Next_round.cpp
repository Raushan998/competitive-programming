#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long arr[1000000];
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    int num=arr[k-1];
    sort(arr,arr+n);
    long long count=0;
    for(long long i=n-1;i>=0;i--){
        if(arr[i]>0 && arr[i]>=num){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
