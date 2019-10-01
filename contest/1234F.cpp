#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
#define  MAX_CHAR 256
int main(){
    string s;
    int i=0,count=0,str[MAX_CHAR],max_count=0;
    cin>>s;
    memset(str,0,MAX_CHAR);
    while(s[i]!='\0'){
        str[s[i]]+=1;
        if(str[s[i]]>1){
            memset(str,0,MAX_CHAR);
            count=0;
        }
        else{
            count++;
            if(max_count<count)
               max_count=count;
        }
        i++;
    }
    cout<<max_count<<endl;
    return 0;
}
