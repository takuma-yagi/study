#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if (n >= 65 && 90 >= n) cout << 1 << endl;
  else if (n >= 97 && 122 >= n) cout << 2 << endl;
  else {cout << 0 << endl;}
}
