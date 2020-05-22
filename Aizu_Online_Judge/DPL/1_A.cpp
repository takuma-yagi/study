#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m, mini, tmp;
  cin >> n >> m;
  int coins[m], dp[50001];
  for(int i = 0; i < m; i++) cin >> coins[i];
  for(int i = 2; i < n + 1; i++){
    mini = n + 1;
    for(int j = 0; j < m; j++){
      if(coins[j] < i){
        tmp = dp[i - coins[j]] + 1;
        mini = min(mini, tmp);
        dp[i] = mini;
      }
    }
  }
  cout << dp[n] << endl;
}
