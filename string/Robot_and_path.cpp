#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int dp[1001][1001];


int numways(int r,int c)
{
	if(dp[0][0]==-1)
	{
		return 0;
	}

	for(int i=0;i<c;i++)
	{

		if(dp[0][i]==-1)
		{
			break;
		}
		dp[0][i]=1;
	}
	for(int i=0;i<r;i++)
	{

		if(dp[i][0]==-1)
		{
			break;
		}
		dp[i][0]=1;
	}

	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
		if(dp[i][j]==-1)
		continue;


			if(dp[i][j]!=-1)
			{
				dp[i][j]=0;
				if(dp[i-1][j]!=-1)
				{
					dp[i][j]=dp[i-1][j]%MOD;
				}
				if(dp[i][j-1]!=-1)
				{
					dp[i][j]=dp[i][j]+dp[i][j-1]%MOD;
				}

				dp[i][j]=(dp[i][j])%MOD;
			}
		}
	}

	if(dp[r-1][c-1]==-1)
	{
		return 0;
	}
	return dp[r-1][c-1];

}
int main()
{
	int n,m,x;
	cin>>n>>m>>x;
	for(int i=0;i<x;i++)
	{
		int l,m;
		cin>>l>>m;
		dp[l-1][m-1]=-1;
	}

	long long ans=numways(n,m);
	cout<<ans<<endl;




}
