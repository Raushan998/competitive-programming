#include<iostream>
using namespace std;
int knapsack(int N,int W,int weight[],int val[]){
     if(W<=0){
         return N==0;
     }
     else if(N==0)
         return 0;
     else if()

}
int main(){
    int N,W;
    cin>>N>>W;
    int weight[N],Val[N];
    for(int i=0;i<N;i++)
        cin>>weight[i];
    for(int i=0;i<N;i++)
        cin>>Val[i];
    cout<<knapsack(N,W,weight,Val)<<endl;
}
