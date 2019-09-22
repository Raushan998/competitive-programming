#include <iostream>
using namespace std;
int minimum_energy(int arr[],int n){
    int cur_energy=1,init_energy=1;
    int flag=0;
    for(int i=0;i<n;i++){
        cur_energy+=arr[i];
        if(cur_energy<=0){
            init_energy+=abs(cur_energy)+1;
            cur_energy=1;
            flag=1;
        }
    }
    if(flag==0)
       return 1;
    else
       return init_energy;
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	       cin>>arr[i];
	    cout<<minimum_energy(arr,n)<<endl;
	}
	return 0;
}
