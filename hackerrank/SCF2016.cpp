#include<set>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int count=0;
    set<char>s1;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==s[i+1]){
        count++;
      }
      s1.insert(s[i]);
    }
    cout<<count<<" ";
    for(auto it=s1.begin();it!=s1.end();it++){
      cout<<*it;
    }
    cout<<" ";
  }
    return 0;
}

