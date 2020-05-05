#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i, val, count = 0;
  scanf("%d", &n);
  vector<pair<int, int> > v(n);

  for (i = 0; i < n; i++){
    cin >> val;
    v.at(i) = make_pair(i, val);
  }
  for (i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      int numdif = v.at(j).first - v.at(i).first;
      int heightsum = v.at(i).second + v.at(j).second;
      if ( numdif == heightsum) count ++;
      }
    }
  cout << count << endl;
]
