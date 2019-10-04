#include <iostream>
#include<cstring>
using namespace std;
void print_digit(int start,string out,int n){
    if(n==0){
        cout<<out<<" ";
        return;
    }
    for(int i=start;i<=9;i++){
        string str=out+to_string(i);
        print_digit(i+1,str,n-1);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        print_digit(1,"",n);
        cout<<endl;
    }
}


