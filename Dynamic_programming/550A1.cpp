#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1,s2;
    long long i=0;
    long long count=0;
    while(s.length()!=0){
         if(s[0]=='A'&&s[1]=='B'&&s1!="AB"){
              count+=1;
              s1.append("AB");
              s.erase(0,2);
              if(count>=2){
                   break;
              }
         }
         else if(s[0]=='B' && s[1]=='A' && s2!="BA"){
              count+=1;
              s2.append("BA");
              s.erase(0,2);
              if(count>=2){
                  break;
              }
         }
         else{
             s.erase(0,1);
         }
    }
    if(count>=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
