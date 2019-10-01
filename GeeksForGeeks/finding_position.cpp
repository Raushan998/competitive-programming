#include<bits/stdc++.h>
using namespace std;
void subsum(vector<vector<int>> &ans, int a[], vector<int> &v, int x, int sum, int i, int n)
{
    if(sum==x)
    {
        ans.push_back(v);
        return;
    }
    for(int k=i;k<n;k++)
    {
       if(sum+a[k]<=x)
       {
        v.push_back(a[k]);
        subsum(ans,a,v,x,sum+a[k],k+1,n);
        v.pop_back();
        while(k<n-1 && a[k]==a[k+1]) k++;
        }
    }
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int n,x; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    cin>>x;
	    sort(a,a+n);
	    vector<vector<int>> ans;
	    vector<int> v;
	    subsum(ans,a,v,x,0,0,n);
	    if(ans.size()==0) cout<<"Empty";
	    else
	    {
	        for(int i=0;i<ans.size();i++)
	        {
	            cout<<"(";
                for(int j=0;j<ans[i].size()-1;j++) cout<<ans[i][j]<<" ";
                cout<<ans[i][ans[i].size()-1]<<")";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
