#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m, i, count = 0;
  int h[n];
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++){
    scanf("%d", h[i]);
  }

  for (i = 0; i < m; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    if(h[a] < h[b]){
      count ++;
    }
  }

  printf("%d", count);
}
