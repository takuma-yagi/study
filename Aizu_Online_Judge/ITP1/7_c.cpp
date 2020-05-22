#include <bits/stdc++.h>
using namespace std;
int main(){
  int r, c, i, j;
  scanf("%d %d", &r, &c);
  int a[r + 1][c + 1];
  for(i = 0; i < r + 1; i++){
    for(j = 0; j < c + 1; j++) a[i][j] = 0;
  }

  for(i = 0; i < r; i++){
    int col_sum = 0;
    for(j = 0; j < c; j++){
      scanf("%d", &a[i][j]);
      col_sum += a[i][j];
      a[r][c] += a[i][j];
      a[r][j] += a[i][j];
    }
    a[i][c] = col_sum;
  }

  for(i = 0; i < r + 1; i++){
    for(j = 0; j < c; j++) printf("%d ", a[i][j]);
    printf("%d\n", a[i][c]);
  }

}
