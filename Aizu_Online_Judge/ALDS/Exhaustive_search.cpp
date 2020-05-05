#include <bits/stdc++.h>
using namespace std;

int n, a[50];

int solve(int i, int m){
  if (m == 0) return 1;
  if (i >= n) return 0;
  int res = solve(i + 1, m) || solve (i + 1, m - a[i]);
  return res;
}

int main(){
  int q, m, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("%d", &q);
  for(i = 0; i < q; i++){
    scanf("%d", &m);
    if (solve(0, m)) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}
