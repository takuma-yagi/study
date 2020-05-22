#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> a(4,vector<int>(13));
  int n, m, i, j, k;
  char c;
  map<int, char> mark;
  mark[0] = 'S';
  mark[1] = 'H';
  mark[2] = 'C';
  mark[3] = 'D';
  for(i = 0; i < 4;i++){
    for(j = 0;j < 13;j++)a.at(i).at(j) = 0;
  }
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%c %d", &c, &m);
    switch(c){
      case 'S':k = 0;break;
      case 'H':k = 1;break;
      case 'C':k = 2;break;
      case 'D':k = 3;break;
    }
    a.at(k).at(m - 1) = 1;
  }

  for(i = 0;i < 4;i++){
    for(j = 0;j< 13;j++){
      if(!a.at(i).at(j))printf("%c %d\n", mark[i],j - 1);
    }
  }
}
