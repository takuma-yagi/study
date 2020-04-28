#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, maxval;
  cin >> n;
  maxval = -200000000000;
  vector<int> p_list(n);
  for (int i = 0; i < n; i++){
    cin >> p_list.at(i);
  }
  int minval = p_list.at(0);

  for (int i = 0; i < n - 1; i++){
    maxval = max(maxval, p_list.at(i + 1) - minval);
    minval = min(minval, p_list.at(i + 1));
  }

  cout << maxval << endl;
}
