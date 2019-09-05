#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int main(){
    long long n;
    int t=INT_MIN;
    string s;
    cin>>s;
    n=s.length();
    int p=1;
    long long j=-1;
    for(int i=0;i<s.length();i++){
         if((s[i]-'0')%2==0){
               int k=s[i]-'0';
               if (p){
                   t=k;
                   j=i;
                   p-=1;
               }
               if(s[j]>s[n-1]){
                   j=i;
               }
            }
         }

    if(j==-1){
         cout<<j<<endl;
    }
    else if((s[n-1]%2==0) && (s[n-1]>s[j])){
         cout<<s<<endl;
    }
    else if(s[j]%2==0){
         char k=s[j];
         s[j]=s[n-1];
         s[n-1]=k;
         cout<<s<<endl;
     }

}
