#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<=t-3;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
             count++;
        }
    }
    cout<<count<<endl;
}
