#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
if(a>b){
return a;
}
  else{
  return b;
  }
}

int main(){
	int n;
	cin >> n;
	int ary[n+1];
	int i, j;
	for(i = 1;i <= n;i++){
		cin >> ary[i];
  }
	int dp[n+1][3];
	for(i = 0;i < n+1;i++){
		for(j = 0;j < 3;j++){
			dp[i][j] = 0;
    }
  }
	int color;
	for(i = 1;i <= n;i++){
		dp[i][0] = max(dp[i-1][1] - ary[i], dp[i-1][2] - ary[i]);
		dp[i][1] = max(dp[i-1][0] + ary[i], dp[i-1][2] + ary[i]);
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]);
		int Max=0;
		if(dp[i][0] > Max){
			Max = dp[i][0];
			color = 0;
		}
		if(dp[i][1] > Max){
			Max = dp[i][1];
			color = 1;
		}
		if(dp[i][2] > Max){
			Max = dp[i][2];
			color = 2;
		}
		
		dp[i][color] = Max;
	}
		
	cout << dp[n][color];
	
}
