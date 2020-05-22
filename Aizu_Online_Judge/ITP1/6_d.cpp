#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, i, j;
  scanf("%d %d", &n, &m);
  int a[n][m], b[m],  ans[n];
  for(i = 0; i < n; i++){
    ans[i] = 0;
    for(j = 0; j< m; j++)scanf("%d", &a[i][j]);
  }
  for(i = 0; i < m; i++) scanf("%d", &b[i]);

  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      ans[i] += (a[i][j] * b[j]);
    }
    printf("%d\n", ans[i]);
  }
}
