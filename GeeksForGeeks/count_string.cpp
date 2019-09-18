#include<bits/stdc++.h>
using namespace std;
int maximum_sum(int n){
   return 1+(n*2)+(n*((n*n)-1)/2);  
}
int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       cout<<maximum_sum(n)<<endl;
    }
    return 0;
}

