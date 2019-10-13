#include<iostream>
using namespace std;
void permutate(char in[],char out[],int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<"(";
        cout<<out<<")";
        return;
    }
    out[j+1]=in[i];
    out[j]=' ';
    permutate(in,out,i+1,j+2);
    out[j]=in[i];
    permutate(in,out,i+1,j+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char in[100];
        cin>>in;
        char out[100];
        out[0]=in[0];
        permutate(in,out,1,1);
        cout<<endl;
    }
    return 0;
}
