#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long F[n];
    for(long long  i=1;i<=n;i++){
         cin>>F[i];
    }
    bool flag=false;
    for(long long i=1;i<=n;i++){
         if(F[F[F[i]]]==i)
             flag=true;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
