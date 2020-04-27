#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, n;
  cin >> a >> b;
  n = (a + b) % 2;
  if (n == 0){
    cout << (a + b) / 2 << endl;
  }
  else {
    cout << (a + b) / 2 + 1 << endl;
  }
}
