#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, q, i, sum = 0;
  int a[4];
  cin >> n >> m >> q;
  for (i = 0; i < q; i++){
    for (int j = 0; j < 4; j++) cin >> a[i];
    if (a[0] - a[1] == a[2]) sum += a[3];
  }
}
