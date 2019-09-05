#include<iostream>
#include<algorithm>
using namespace std;
long long boys[10000000],girls[10000000];
int main(){
    long long boy,girl;
    long long dp[1000000][1000000];
    cin>>boy;
    for(long long i=0;i<boy;i++)
       cin>>boys[i];
    cin>>girl;
    for(long long i=0;i<girl;i++)
       cin>>girls[i];
    sort(boys,boys+boy);
    sort(girls,girls+girl);
    long long count=0;
    for(int i=0;i<boy;i++){
        for(int j=0;j<girl;j++){
            if(i=0 && j==0){
                if(abs(boys[i]-girls[j])<=1){
                    count++;
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
            }
            else if(i>0 && j>0 && dp[i-1][j]!=1 && dp[i][j-1]!=1){
                       if(abs(boys[i]-girls[j])<=1){
                           dp[i][j]=1;
                           count++;
                       }
                       else{
                           dp[i][j]=0;
                        }
            }
            else if(i==0 && dp[i][j-1]!=1){
                if(abs(boys[i]-girls[j])<=1){
                   dp[i][j]=1;
                   count++;
                }
                else{
                    dp[i][j]=0;
                }
            }
            else if(j==0 && dp[i-1][j]!=1){
                if(abs(boys[i]-girls[j])<=1){
                   dp[i][j]=1;
                   count++;
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
