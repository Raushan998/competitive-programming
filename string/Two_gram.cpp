#include<iostream>
#include<cstring>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string str;
    cin>>str;
    string ans;
    int res=0;
    for(int i=0;i<n-1;i++){
        int curr=0;
        for(int j=0;j<n-1;j++){
             if(str[i]==str[j] && str[i+1]==str[j+1])
                 curr++;
        }
             if(res<curr){
                 res=curr;
                 ans=string(1,str[i])+string(1,str[i+1]);
             }

    }
    cout<<ans<<endl;
}
