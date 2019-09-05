#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long t;
    cin>>t;
    //string str;
    while(t--){
        string str;
        cin>>str;
        vector<long long>arr(n+1,1);
        long long count=0;
        long long i=0,j=0;

        while(i<str.length()){
            if(s[j]==str[i] && arr[j]==1){
                i++;
                if(count<j)
                   count=j;
                arr[j]=0;
                j=0;
            }
            else{
                j++;
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}

