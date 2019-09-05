#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,s1,s2;
    cin>>s;
    int l=n/2;
    //int sum=0;
    if(n&1){
        s1=s.substr(0,l+1);
        s2=s.substr(l+1,s.length()-l+1);
    }
    else{
        s1=s.substr(0,l);
        s2=s.substr(l,s.length()-l+1);
    }
    long long sum1=stoll(s1);
    long long sum2=stoll(s2);
    cout<<sum1+sum2<<endl;
    return 0;
}
