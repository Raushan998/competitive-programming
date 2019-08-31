#include<iostream>
#include<cstring>
using namespace std;
bool abbreviate(string s1,string s2){
    int m=s1.length();
    int n=s2.length();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++)
           dp[i][j]=0;
    }
    dp[0][0]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++){
            if(dp[i][j]){
                if(j<s2.length() && toupper(s1[i])==s2[j])
                    dp[i+1][j+1]=true;
                if(!isupper(s1[i]))
                    dp[i+1][j]=true;
            }
        }
    }
    return dp[m][n];
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(abbreviate(s1,s2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
