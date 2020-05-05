#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, a, b;
  cin >> k >> a >> b;

  int target = (b / k) * k;
  if(a <= target) cout << "OK" << endl;
  else {cout << "NG" << endl;}
  return 0;
}
