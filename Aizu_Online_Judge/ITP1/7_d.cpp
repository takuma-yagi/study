#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m,l,i,j,k;
  scanf("%d %d %d", &n, &m, &l);
  int a[n][m],b[m][l],c[n][l];
  for(i = 0;i < n;i++){
    for(j = 0;j < m;j++)scanf("%d", &a[i][j]);
  }
  for(i = 0;i < m;i++){
    for(j = 0;j < l;j++)scanf("%d", &b[i][j]);
  }
  for(i = 0;i < n; i++){
    for(j = 0;j < l; j++)c[i][j] = 0;
  }
  for(i = 0;i < n;i++){
    for(j = 0;j < l - 1;j++){
      for(k = 0;k < m; k++) c[i][j] += a[i][k] * b[k][j];
      if(j == l - 1)printf("%d\n", c[i][j]);
      else printf("%d ", c[i][j]);
    }
  }

}
