#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int n, i, count = 0;
  scanf("%d", &n);
  vector<int> a(n), b(n), c(n);
  for(i = 0; i < n; i++) scanf("%d", a[i]);
  for(i = 0; i < n; i++) scanf("%d", b[i]);
  for(i = 0; i < n; i++) scanf("%d", c[i]);

  sort(a.begin(), a.end());
  sort(c.begin(), c.end());

  for(i = 0; i < n; i++){
    int val = b.at(i);
    count += (lower_bound(a.begin(), a.end(), v) - a.begin()) * (upper_bound(c.begin(), c.end(), v) - c.end());
  }

  printf("%d", count);
}
