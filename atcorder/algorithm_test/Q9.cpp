#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, q, query, a, b, tmp;
  scanf("%d", &n);
  int graph[n][n], transpose[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      graph[i][j] = n * i + j;
    }
  }
  scanf("%d", &q);
  for(int i = 0; i < q; i++){
    scanf("&d", &query);
    if(query == 1){
      scanf("%d %d", &a, &b);
      a--;
      b--;
      for(int j = 0; j < n; j++){
        tmp = graph[a][j];
        graph[a][j] = graph[b][j];
        graph[b][j] = tmp;
      }
    }else if(query == 2){
      scanf("%d %d", &a, &b);
      a--;
      b--;
      for(int j = 0; j < n; j++){
        tmp = graph[j][a];
        graph[j][a] = graph[j][b];
        graph[j][b] = tmp;
      }
    }else if(query == 3){
      for(int j = 0; j < n; j++){
        for(int k = 0; k < n; k++){
          transpose[i][j] = graph[j][i];
          graph[i][j] = transpose[i][j];
        }
      }
    }else{
      scanf("%d %d", &a, &b);
      a--;
      b--;
      cout << graph[a][b] << endl;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++)cout << graph[i][j];
    cout << endl;
  }

}
