#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int count_plus = 0;
  int count_minus = 0;
  for (int i = 0; i < s.size(); i++){
    if (s.at(i) == '+'){
      count_plus ++;
    }
    else if (s.at(i) == '-'){
      count_minus ++;
    }
  }
  cout << 1 + count_plus - count_minus << endl;
}
