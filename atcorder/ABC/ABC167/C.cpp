#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;
int a[12][12];


int main(){
  int n, m, x, i, j;
  scanf("%d %d %d", &n, &m, &x);
  vector<int> c(n);
  for(i = 0; i < n; i++){
    scanf("%d", &c.at(i));//参考書の代金
    for(j = 0; j < m; j++) scanf("%d", &a[i][j]);//身に付くスキル
  }

  int ans = INF;
  for(i = 0; 1 << n){
    int cost = 0;
    vector<int> d(m);
    for(i = 0; i < n; i++){
      if(s << i&1){
        cost += c[i];
        for(j = 0;j < m; j++)d[j] += a[i][j];
      }
    }
    bool ok = true;
    for(j =0; j < m; j++) if(d[j] < x) ok = false;
    if(ok) ans = min(ans, cost);
  }
  if (ans == INF)cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}
