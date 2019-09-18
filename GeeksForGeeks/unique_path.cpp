#include <iostream>
using namespace std;
int unique_path(int m,int n){
    int dp[m][n]={0};
	    for(int i=1;i<=m;i++){
	        dp[i][1]=1;
	    }
	    for(int i=1;i<=n;i++){
	        dp[1][i]=1;
	    }
	    for(int i=2;i<=m;i++){
	        for(int j=2;j<=n;j++){
	            dp[i][j]=dp[i-1][j]+dp[i][j-1];
	        }
	    }
	    return dp[m][n];
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    cout<<unique_path(m,n)<<endl;
	}
	return 0;
}

