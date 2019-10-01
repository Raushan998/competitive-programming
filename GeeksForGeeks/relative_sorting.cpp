#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        map<int,int>my_map;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            my_map[a[i]]++;
        }
        for(int i=0;i<m;i++){
            while(my_map[b[i]]){
                cout<<b[i]<<" ";
                my_map[b[i]]--;
            }
        }
        for(int i=0;i<n;i++){
            while(my_map[a[i]]){
               cout<<a[i]<<" ";
               my_map[a[i]]--;
            }
        }
        cout<<endl;
}
   return 0;
}