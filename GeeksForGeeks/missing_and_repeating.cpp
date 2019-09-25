#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    long long n,num=0,missing_num=0,j=1;
	    cin>>n;
	    long long arr[n]={0};
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        arr[num]++;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[j]>1){
	            num=j;
	        }
	        else if(arr[j]==0){
	            missing_num=j;
	        }
	        else if(num!=0 && missing_num!=0)
	           break;
                    j++;

	    }
	    cout<<num<<" "<<missing_num<<endl;
	}
	return 0;
}
