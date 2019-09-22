#include <iostream>
#include<cstring>
using namespace std;
long long dp[1000][1000];
int solve(int l, int m, string &S, string &T){
    for(int i=0;i<=m;i++){
       dp[i][0]=0;
    }
    for(int j=0;j<=l;j++){
        dp[0][j]=1;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=l;j++){
            if(S[j-1]!=T[i-1]){
                 dp[i][j]=dp[i][j-1];
            }
            else{
                 dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
            }
        }
    }
    return dp[m][l];
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        /*for(int i=0;i<=s.length();i++){
            for(int j=0;j<=t.length();j++)
               dp[i][j]=-1;
        }*/
        cout<<solve(s.length(),t.length(),s,t)<<endl;
    }
    return 0;
}
