#include<iostream>
using namespace std;
bool is_prime(int &m){
     if(m==1){
         return false;
     }
     for(int i=2;i*i<=m;i++){
         if(m%i==0){
             return true;
         }
     }
     return false;
}
int main(){
     long long m;
     cin>>m;
     for(int i=1;i<=1000;i++){
          int t=m*i+1;
          if(is_prime(t)==1){
              cout<<i<<endl;
              break;
          }
     }
     return 0;
}
