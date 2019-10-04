#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=0;
        long long t;
        for(int i=0;i<n;i++){
            cin>>t;
            sum+=t;
        }
        if(sum%n)cout<<(sum+n-1)/n<<endl;
        else cout<<sum/n<<endl;
      }
      return 0;
}

