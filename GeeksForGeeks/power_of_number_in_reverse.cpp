#include<iostream>
using namespace std;
long long cal(long long num,long long t){
    if(t==0)
       return 1;
    long long x=cal(num,t/2);
    if(t%2==0)
        return (x*x)%1000000007;
    else
        return (((num*x)%1000000007)*x)%1000000007;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  num,t=0,q;
        cin>>num;
        q=num;
        while(q>0){
            t=t*10+q%10;
            q/=10;
        }
        cout<<cal(num,t)<<endl;
    }
}
