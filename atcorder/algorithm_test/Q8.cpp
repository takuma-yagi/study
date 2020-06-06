#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, l, tmp, t1, t2, t3;
  scanf("%d %d", &n, &l);
  int hurdle[l + 1], dp[l + 1];
  for(int i = 0; i < l; i++) hurdle[i] = 0;
  for(int i = 0; i < n; i++){
    scanf("%d", &tmp);
    hurdle[tmp] = 1;
  }
  scanf("%d %d %d", &t1, &t2, &t3);
  int act1 = t1;
  int act2 = t1 + t2;
  int act3 = t1 + t2 * 3;
  dp[0] = 0;
  dp[1] = act1;
  dp[2] = min(dp[1] + act1, dp[0] + act2);
  dp[3] = min(dp[2] + act1, dp[1] + act2);
  for(int i = 0; i < 4; i++){
    if(hurdle[i]) dp[i] += t3;
  }
  for(int i = 4; i < n + 2; i++){
    dp[i] = min(dp[i - 1] + act1, min(dp[i - 2] + act2, dp[i - 4] + act3));
    if(hurdle[i]) dp[i] += t3;
  }
  int ans = min(dp[l], dp[l - 2] + (t1))
  printf("%d", dp[l]);
}
