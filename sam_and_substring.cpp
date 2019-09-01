#include<iostream>
#include<cstring>
using namespace std;
long long sam_and_substring(string input){
     long long n=input.length();
     long long sumofdigit[n+1];
     long long res;
     res=input[0]-'0';
     sumofdigit[0]=input[0]-'0';
     for(long long i=1;i<input.length();i++){
         long long numi=input[i]-'0';
         sumofdigit[i]=(i+1)*numi+10*sumofdigit[i-1];
         res+=sumofdigit[i];
     }
     return res;
}
int main(){
    string input;
    cin>>input;
    cout<<sam_and_substring(input)<<endl;
    return 0;
}
