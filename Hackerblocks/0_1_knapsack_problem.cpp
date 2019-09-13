#include<iostream>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[n][W];
}
int main(){
    int n,w;
    cin>>n>>w;
    int wt[n+1],val[n+1];
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int j=0;j<n;j++)
       cin>>val[j];
     cout<<knapSack(w,wt,val,n)<<endl;
     return 0;

}
