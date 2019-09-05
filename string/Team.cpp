#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long count=0;
    for(int i=0;i<n;i++){
        int q1,q2,q3;
        cin>>q1>>q2>>q3;
        if((q1&&q2) || (q2&&q3) || (q1&&q3)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
