#include<iostream>
#include<cstring>
using namespace std;
bool two_substring(string s,string s1,int count){
    if(s.length()==0 && count!=2){
         return false;
    }
    if(s[0]=='A' && s[1]=='B' && s1!="AB"){
         count+=1;
         s1=s[0]+s[1];
         s.erase(0,2);
         if(count>=2)
             return true;
         else
             return(two_substring(s,s1,count));
    }
    else if(s[0]=='B'&& s[1]=='A'&& s1!="BA"){
         count+=1;
         s1=s[0]+s[1];
         s.erase(0,2);
         if(count>=2)
             return true;
         else
             return(two_substring(s,s1,count));
    }
    else{
          s.erase(0,1);
          return(two_substring(s,s1,count));
    }
}
int main(){
    string s;
    cin>>s;
    string s1=" ";
    if(two_substring(s,s1,0)){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
    return 0;
}
