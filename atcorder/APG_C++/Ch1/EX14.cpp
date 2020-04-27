#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int mini = min(min(a, b), c);
  int maxi = max(max(a, b), c);
  cout << maxi - mini<< endl;
}
