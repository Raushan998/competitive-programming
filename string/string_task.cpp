#include<iostream>
#include<cstring>
using namespace std;
int main(){
     string s;
     cin>>s;
     for(int i=0;i<s.length();i++){
         if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o' || s[i]=='I' || s[i]=='i' || s[i]=='U' || s[i]=='u' || s[i]=='Y' || s[i]=='y')
             continue;
         else{
              s[i]=tolower(s[i]);
              cout<<"."<<s[i];
         }
     }
     return 0;
}
