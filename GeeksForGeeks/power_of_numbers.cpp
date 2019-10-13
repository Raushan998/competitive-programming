#include<iostream>
using namespace std;
int  reverse(int num){
    int n=0;
    while(num>0){
        n=n*10+num%10;
        num/=10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    int q=1;
    int arr[1000000]={0};
    arr[0]=1;
    int len=1,x=0,num=0,m=reverse(n);
    while(q<=m){
        x=0,num=0;
        while(x<len){
            arr[x]=arr[x]*n;
            arr[x]=arr[x]+num;
            num=arr[x]/10;
            arr[x]=arr[x]%10;
            x++;
        }
        while(num!=0){
            arr[len]=num%10;
            num/=10;
            len++;
        }
        q++;
    }
    len--;
    while(len>=0){
        cout<<arr[len];
        len-=1;
    }

}
