#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, x, i, j, k, l;
  for(i = 0; ;i++){
    int count = 0;
    scanf("%d %d", &n, &x);
    if(n == 0 && x == 0)break;
    for(j = 1; j < n - 1 ;j++){
      for(k = j + 1; k < n; k++){
        for(l = k + 1; l < n + 1; l++){
          if(j + k + l == x) count++;
        }
      }
    }
      printf("%d\n", count);
  }
}
