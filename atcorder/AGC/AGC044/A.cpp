#include <bits/stdc++.h>
using namespace std;

int main(){
  long long inf = 1000000000000000000;
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    long long coins[4], n, j;
    cin >> n;
    for(j = 0; j < 4; j++) cin >> coins[j];
   	vector<long long> dp;
    dp.push_back(0);
    dp.push_back(coins[3]);
    for(j = 2; j < n + 2; j++) dp.push_back(inf);
    for(j = 1; j < n + 2; j++){
      dp[2 * j] = min(dp[2 * j], dp[j] + coins[0]);
      dp[3 * j] = min(dp[3 * j], dp[j] + coins[1]);
      dp[5 * j] = min(dp[5 * j], dp[j] + coins[2]);
      dp[j - 1] = min(dp[j - 1], dp[j] + coins[3]);
      dp[j + 1] = min(dp[j + 1], dp[j] + coins[3]);
    }
    cout << dp[n] << endl;
  }
}
