#include <iostream>
#include<cstring>
using namespace std;
void remove_duplicates(char s[],int i){
    if(s[i]=='\0')
        return;
    else if(s[i]==s[i+1])
        remove_duplicates(s,i+2);

    else if(s[i]!=s[i-1]){
        cout<<s[i];
        remove_duplicates(s,i+1);
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    char s[100];
	    cin>>s;
	    remove_duplicates(s,0);
	    cout<<endl;
	}
	return 0;
}
