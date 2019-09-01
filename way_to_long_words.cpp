#include<iostream>
#include<cstring>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
         string s;
         cin>>s;
         int l;
         l=s.length();
         if(l<=10){
             cout<<s<<endl;
         }
         else{
              l-=2;
              cout<<s[0]<<l<<s[l+1]<<endl;
         }
    }
    return 0;
}
