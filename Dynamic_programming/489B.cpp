#include<iostream>
#include<algorithm>
using namespace std;
long long boys[10000000],girls[10000000];
int main(){
    long long boy,girl;
    cin>>boy;
    for(long long i=0;i<boy;i++)
       cin>>boys[i];
    cin>>girl;
    for(long long i=0;i<girl;i++)
       cin>>girls[i];
    sort(boys,boys+boy);
    sort(girls,girls+girl);
    long long count=0;
    long long dp[100000]={0};
    for(int i=0;i<boy;i++){
        for(int j=0;j<girl;j++){
            if(abs(boys[i]-girls[j])<=1 && !dp[j]){
                dp[j]=1;
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
