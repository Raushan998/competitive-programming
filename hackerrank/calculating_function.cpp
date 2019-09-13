#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long num;
        cin>>num;
        if(num&1){
        cout<<-(num+1)/2<<endl;
        }
        else{
            cout<<num/2<<endl;
        }
    }
       return 0;
}
