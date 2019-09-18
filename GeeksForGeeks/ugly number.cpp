#include<iostream>
using namespace std;
int dp[10000];
int getNthUglyNo(int num){
    dp[1]=1;
    int f2=1,f3=1,f5=1;
    for(int i=2;i<=num;i++){
        long long int ans_f_2 = dp[f2] * 2;
	    long long int ans_f_3 = dp[f3] * 3;
		long long int ans_f_5 = dp[f5] * 5;
		// finding minimum of all the answer
		long long int final_ans = min(ans_f_2, min(ans_f_3, ans_f_5));
		// storing the ans
		dp[i] = final_ans;
		// if our final_ans is ans_f_2, ans_f_3, ans_f_5
		// then increment their counters i.e f2, f3, f5
		if(final_ans == ans_f_2){
			f2++;
		}
		if(final_ans == ans_f_3){
			f3++;
		}
		if(final_ans == ans_f_5){
			f5++;
		}
    }
    return dp[num];
}
/* Driver program to test above functions */
int main()
{
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        for(int i=0;i<=num;i++){
            dp[i]=-1;
        }
	    unsigned no = getNthUglyNo(num);
        cout<<no<<endl;
    }
	return 0;
}
