#include<iostream>
#include<cstring>
using namespace std;
int main(){
    long long n;
    cin>>n;
    char s[1000000];
    cin>>s;
    if(strlen(s)>26){
       cout<<-1<<endl;
    }

    else{
        long long cnt=0;
        long long str[256]={0};
        for(int i=0;i<strlen(s);i++)
             str[s[i]]++;
        for(int i=0;i<256;i++){
               if(str[i]>1){
                cnt+=str[i]-1;
           }
    }
    if(cnt>=26){
        cout<<-1<<endl;
    }
    else
        cout<<cnt<<endl;
    }
    return 0;
}
