#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, lim, v, w;
  cin >> n >> lim;
  int dp[110][10010], weight[110],value[110];
  for(int i = 0; i < n; i++) cin >> value[i] >> weight[i];
  for(int i = 0; i < lim; i++) dp[0][i] = 0;
  for(int i = 0; i < n; i++){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < lim + 1; j++){
        if(j >= weight[i]){
          dp[i + 1][j] = max(dp[i][j - weight[i]] + value[i], dp[i][j]);
        }
        else dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[n][lim] << endl;
}
