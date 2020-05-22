#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, b, f, r, v, i, j, k;
  scanf("%d", &n);
  int count[4][3][10];
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3;j++){
      for(k = 0; k < 10; k++) count[i][j][k] = 0;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d %d %d %d", &b, &f, &r, &v);
    count[b - 1][f - 1][r - 1] += v;
  }

  for(i = 0; i < 3;i++){
    for(j = 0; j< 3;j++){
      for(k = 0; k < 10; k++)cout << count[i][j][k];
      cout << endl;
    }
    cout << "####################" << endl;
  }
  for(j = 0; j < 3; j++){
    for(k = 0; k < 10; k++)cout << count[3][j][k];
    cout << endl;
  }

}
