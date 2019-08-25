#include<iostream>
#include<cstring>
using namespace std;
string highest_value_palindrome(string s,int k){
      string palin=s;
      int l=0;
      int r=s.length()-1;
      while(l<r){
           if(s[l]!=s[r]){
               palin[l]=palin[r]=max(s[l],s[r]);
               k--;
           }
           l++;
           r--;
      }
      if(k<0){
           return ("-1");
      }
      l=0;
      r=s.length()-1;
      while(l<=r){
          if(l==r){
              if(k>0){
                   palin[l]='9';
              }
          }
          if(palin[l]<'9'){
              if(k>=2 && palin[l]==s[l] && palin[r]==s[r]){
                   palin[l]=palin[r]='9';
                   k-=2;
              }

          else if(k>=1 && (s[l]!=palin[l] || s[r]!=palin[r])){
                palin[l]=palin[r]='9';
                k--;
          }
         }
          l++;
          r--;
      }
      return palin;
}
int main(){
    int t,k;
    cin>>t>>k;
   // char s[100];
    string s;
    cin>>s;
    cout<<highest_value_palindrome(s,k)<<endl;
    return 0;
}
