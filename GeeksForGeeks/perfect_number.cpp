#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
    vector<long long int>v;
    long long int num=1;
    while(num<=sqrt(n)){
        if(n%num==0){
        v.push_back(num);
        if(num*num!=n)
        v.push_back(n/num);}
        num++;
    }
    long long int r=0;
    for(int i=0;i<v.size();i++){
        r =r+v[i];
    }
    if(r==2*n)
    cout<<"1\n";
    else
    cout<<"0\n";
}
	return 0;
}
