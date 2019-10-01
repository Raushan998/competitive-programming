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
        long long arr[1000001];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        long long price=0;
        for(int i=0;i<n;i++){
            price=arr[i];
            price*=n;
            if(price>=sum){
               cout<<price/n<<endl;
               break;
             }
         }
      }
      return 0;
}

