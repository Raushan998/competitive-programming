#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void combination_sum(vector<int>&vect1,vector<int>&vect2,int i,int sum,vector<vector<int>>&vect){
     if(sum==0){
           vect.push_back(vect2);
           return;
     }
     else if(sum<0)
         return;
     while(i<vect1.size() && sum-vect1[i]>=0){
          vect2.push_back(vect1[i]);
          combination_sum(vect1,vect2,i,sum-vect1[i],vect);
          i++;
          vect2.pop_back();
     }
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<int>vect1,vect2;
       vector<vector<int>>vect;
       for(int i=0;i<n;i++){
          int num;
          cin>>num;
          vect1.push_back(num);
       }
       int sum;
       sort(vect1.begin(),vect1.end());
       cin>>sum;
       combination_sum(vect1,vect2,0,sum,vect);
       if(vect.empty()){
           cout<<"Empty"<<endl;
       }
       else{
       for (int i = 0; i < vect.size(); i++)
       {
          if (vect[i].size() > 0)
          {
            cout << "(";
            for (int j = 0; j < vect[i].size(); j++){
                cout << vect[i][j] << " ";
            }
            cout << ")";
        }
      }
      }
      cout<<endl;
   }
   return 0;
}
