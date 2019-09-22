#include <iostream>
using namespace std;
int minElement(int arr[],int n){
    int incl=arr[0];
    int excl=0;
    for(int i=1;i<n;i++){
        int incl_new=arr[i]+min(incl,excl);
        excl=incl;
        incl=incl_new;
    }
    return min(incl,excl);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<minElement(arr,n)<<endl;
    }
    return 0;
}

