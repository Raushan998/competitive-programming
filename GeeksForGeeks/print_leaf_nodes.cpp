#include <iostream>
#include<algorithm>
using namespace std;
int binary_search1(int inorder[],int l,int r,int d){
    int mid=(l+r)>>1;
    if(inorder[mid]==d)
        return mid;
    else if(inorder[mid]>d){
        binary_search1(inorder,l,mid-1,d);
    }
    else
        binary_search1(inorder,mid+1,r,d);
}
void find_leaf(int inorder[],int preorder[],int l,int r,int *in,int n){
    if(l==r){
        cout<<inorder[l]<<" ";
        *in=*in+1;
        return;
    }
    if(l<0 || l>r || r>=n)
       return;
    int loc=binary_search1(inorder,l,r,preorder[*in]);
    *in=*in+1;
    find_leaf(inorder,preorder,l,loc-1,in,n);
    find_leaf(inorder,preorder,loc+1,r,in,n);
}
void leaf_traversal(int preorder[],int n){
    int inorder[n];
    for(int i=0;i<n;i++){
        inorder[i]=preorder[i];
    }
    sort(inorder,inorder+n);
    int in=0;
    find_leaf(inorder,preorder,0,n-1,&in,n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int preorder[n];
	    for(int i=0;i<n;i++)
	       cin>>preorder[i];
	    leaf_traversal(preorder,n);
	}
	return 0;
}
