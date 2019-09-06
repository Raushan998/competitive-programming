#include<iostream>
using namespace std;
int main(){
   int arr[1000],cur_max=0,max1=-1;
   int n,count=0;
   cin>>n;
   for(int i=0;i<n;i++)
      cin>>arr[i];
   for(int i=0;i<n;i++){
       if(arr[i]==1){
          count++;
          if(cur_max>0)
             cur_max--;
       }
       else{
            cur_max+=1;
            if(max1<cur_max)
                max1=cur_max;
       }
   }
   cout<<max1+count<<endl;
   return 0;
}
