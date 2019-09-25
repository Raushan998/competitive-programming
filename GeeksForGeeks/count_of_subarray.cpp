#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0,i=0,s=0;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
         }
         while(i<n){
             if(arr[i]>k){
                i++;
                continue;
             }
             while(i<n && arr[i]<=k){
                 i++;
                 count++;
             }
             s+=(count*(count+1)/2);
         }
         cout<<(n*(n+1)/2)-s<<endl;
     }
}
