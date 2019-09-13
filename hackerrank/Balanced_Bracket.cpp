#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkexpression(string str){
    stack<char>s;
    int l=str.length();
    for(int i=0;i<l;++i){
        char curchar=str[i];
        if(curchar=='{' || curchar=='(' || curchar=='['){
            s.push(curchar);
        }
        else if(curchar==')' || curchar=='}' || curchar==']'){
            if(s.empty() || (curchar==')' && s.top()!='(')){
                return false;
            }
            else if(s.empty() || (curchar=='}' && s.top()!='{')){
                return false;
            }
            else if(s.empty() || (curchar==']' && s.top()!='[')){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(checkexpression(str)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
