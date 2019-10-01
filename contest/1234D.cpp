#include<iostream>
#include<cstring>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;
    while(q--){
        int l,pos,r;
        char p;
        cin>>l;
        if(l==1){
            cin>>pos;
            cin>>p;
            s[pos-1]=p;
        }
        else if(l==2){
            cin>>pos;
            cin>>r;
            set<char>s_;
            for(int i=pos-1;i<r;i++){
                s_.insert(s[i]);
            }
            cout<<s_.size()<<endl;
            s_.erase(s_.begin(),s_.end());
        }
    }
    return 0;
}
