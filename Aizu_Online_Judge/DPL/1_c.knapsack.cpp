#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, lim, v, w, value[110], weight[110], maxval = -1;
  cin >> n >>lim;
  for(int i = 0; i < n; i++) cin >> value[i] >> weight[i];
  int dp[10010];
  fill_n(dp, lim +1, -1);
  dp[0] = 0;
  //全ての重量について調べ上げる
  for(int i = 0; i < n; i++){
    w = weight[i];
    v = value[i];
    for(int j = w; j < lim + 1; j++){
      if(dp[j - w] != -1) dp[j] = max(dp[j - w] + v, dp[j]);
      maxval = max(maxval, dp[j]);
    }
  }
  cout << maxval << endl;
}
