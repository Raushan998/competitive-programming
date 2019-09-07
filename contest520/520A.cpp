#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
bool panagram(string s,int n){
    unordered_map<char,int>a;
    char s1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    for(int i=0;i<26;i++){
         a[s[i]]=0;
    }
    if(n<26){
        return false;
    }
    else{
       for(int i=0;i<n;i++){
          if(islower(s[i])){
              char p=toupper(s[i]);
              s[p]++;
          }
          else{
              a[s[i]]++;
          }
       }
       for(auto it=a.begin();it!=a.end();it++){
            if(it->second==0){
               return false;
            }
       }

    }
    return true;
}
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    cout<<panagram(s,n)<<endl;
}
