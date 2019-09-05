#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    unordered_map<string,string>mymap;
    for(int i=0;i<b;i++){
        string l,m;
        cin>>l>>m;
        mymap[l]=m;
    }
    for(int i=0;i<a;i++){
        string l;
        cin>>l;
        if(l.length()>mymap[l].length()){
            cout<<mymap[l]<<" ";
        }
        else{
             cout<<l<<" ";
        }
    }
    return 0;
}
