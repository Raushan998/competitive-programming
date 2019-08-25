#include<iostream>
#include<climits>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     int left=0,right=0,zero_count,max_length=INT_MIN;
     for(long long i=0;i<n;i++){
          if(a[i]==0){
              left+=1;
              right+=1;
              zero_count++;
              if(max_length<right-left+1)
                  max_length=right-left+1;
          }
          if(a[i]==1){
              right+=1;
              if(max_length<right-left+1)
                  max_length=right-left+1;
          }
          while(zero_count>k){
               if(a[left]==0)
                   zero_count--;
               left++;
          }
     }
     cout<<max_length<<endl;
}
