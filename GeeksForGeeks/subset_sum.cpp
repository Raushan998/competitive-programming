#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print_subsets(int arr[],int l,int r,vector<int>&vect,int sum=0){
    if(l>r){
       vect.push_back(sum);
       return;
    }
    print_subsets(arr,l+1,r,vect,sum+arr[l]);
    print_subsets(arr,l+1,r,vect,sum);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];
        vector<int>vect;
        print_subsets(arr,0,n-1,vect,0);
        sort(vect.begin(),vect.end());
        for(int i=0;i<vect.size();i++){
            cout<<vect[i]<<" ";
        }
        cout<<endl;
    }
}
