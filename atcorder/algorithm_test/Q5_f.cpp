#include<bits/stdc++.h>
using namespace std;
int main(){
  int m, n, q, tmp, query, x, y;
  scanf("%d %d %d", &n, &m, &q);
  int graph[n][n];
  int c[n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++) graph[i][j] = 0;
  }

  for(int i = 0; i < m; i++){
    int v, u;
    scanf("%d %d", &v, &u);
    v--;
    u--;
    graph[v][u] = 1;
    graph[u][v] = 1;
  }

  for(int i = 0; i < n; i++){
    scanf("%d", &tmp);
    c[i] = tmp;
  }

  for(int i = 0; i < q; i++){
    scanf("%d %d", &query, &x);
    x--;
    if(query == 1){
      printf("%d\n", c[x]);
      for(int i = 0; i < n; i++){
        tmp = graph[x][i];
        if(tmp) c[i] = c[x];
      }
    }else{
      scanf("%d", &y);
      printf("%d\n", c[x]);
      c[x] = y;
    }
  }
}
