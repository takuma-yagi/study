#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m, q, query, h, prob, solved;
  scanf("%d %d %d", &n, &m, &q);
  map<int, int> score;
  map<int, vector<int> > solved_h;
  int already[m][n];
  int point[m];
  for(int i = 0; i < n + 1; i++){
    score[i] = 0;
  }
  for(int i = 0; i < m + 1; i++){
    point[i] = n - 1;
  }

  for(int i = 0; i < q; i++){
    scanf("%d %d", &query, &h);
    if(query == 1){
      printf("%d\n", score[h]);
    }else{
      scanf("%d", &solved);
      score[h] += point[solved];
      point[solved]--;
    }
  }
}
