#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  //n:人数 m:試合数
  cin >> n >> m;
  vector<vector<char>> match_table(n, vector<char>(n));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      match_table.at(i).at(j) == '-';
    }
  }
  for (int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    match_table.at(x).at(y) = 'o';
    match_table.at(y).at(x) = 'x';
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      match_table.at(i).at(j) == '-';
    }
  }
}
