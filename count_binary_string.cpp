#include<iostream>
using namespace std;
int dp[1000];
int count_string(int n,int lastdigit){
    if(n==1 && lastdigit==0)
       return 2;
    if(n==1 && lastdigit!=0)
        return 1;
    if(lastdigit==0){
          return(count_string(n-1,0)+count_string(n-1,1));
    }
    else if(lastdigit!=0)
        return(count_string(n-1,0));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<count_string(n,0)<<endl;
    }
    return 0;
}

