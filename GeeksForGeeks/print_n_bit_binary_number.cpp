#include<iostream>
#include<cstring>
using namespace std;
void print_rec(string s,int extraones,int remaining){
    if(remaining==0){
        cout<<s<<" ";
        return;
    }
    print_rec(s+"1",extraones+1,remaining-1);
    if(extraones>0){
        print_rec(s+"0",extraones-1,remaining-1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        print_rec(s,0,n);
        cout<<endl;
    }
}
