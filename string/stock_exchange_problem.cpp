#include<iostream>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;
long long stock[100000000],price[100000000],n;
long long exchange(map<int,int>stocks,long long q1){
    long long mid,s=0,e=n-1,ans;
    while(s<=e){
        mid=(s+e)/2;
        if(stock[mid]<=q1){
            ans=stock[mid];
            s=mid+1;
        }
        else if(stock[mid]>q1){
             e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return stocks[ans];
}
int main(){
    map<int,int>s;
    cin>>n;
    for(long long i=0;i<n;i++)
         cin>>stock[i];
    for(long long i=0;i<n;i++)
        cin>>price[i];
    for(int i=0;i<n;i++)
        s[stock[i]]=price[i];
    int q;
    cin>>q;
    sort(stock,stock+n);
    while(q--){
        long long q1;
        cin>>q1;
        cout<<exchange(s,q1)<<endl;
    }
    return 0;
}

