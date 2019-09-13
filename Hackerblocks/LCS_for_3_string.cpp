#include<iostream>
#include<cstring>
using namespace std;
long long dp[100][100][100]={0};
 long long  LCS(string s1,string s2,string s3){
     long long x=s1.length();
     long long y=s2.length();
     long long  z=s3.length();
     for(long long  i=1;i<=x;i++){
          for(long long  j=1;j<=y;j++){
               for(long long  k=1;k<=z;k++){
                    if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1]){
                        dp[i][j][k]=1+dp[i-1][j-1][k-1];
                    }
                    else
                        dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
               }
          }
     }
     return dp[x][y][z];
}
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<LCS(s1,s2,s3)<<endl;
    return 0;
}
