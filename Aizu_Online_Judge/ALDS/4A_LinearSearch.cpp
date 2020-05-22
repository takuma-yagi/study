#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, val, m, i, j, count = 0, v;
  scanf("%d", &n);
  set<int> s;
  for(i = 0; i < n; i++) {
    scanf("%d", &val);
    s.insert(val);
  }
  scanf("%d", &m);

  for(i = 0; i < m; i++){
    scanf("%d", &v);
    if (s.count(v)) count++;
  }

  printf("%d\n", count);
}
