#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    vector<char>vect;
    int l=s.length();
    while(l>0){
        if(l&1){
             vect.push_back(s[0]);
        }
        else{
            vect.insert(vect.begin(),s[0]);
        }
        s.erase(0,1);
        l=s.length();
    }
    for(vector<char>::iterator it=vect.begin();it!=vect.end();++it){
        cout<<*it;
    }
    cout<<endl;
}
