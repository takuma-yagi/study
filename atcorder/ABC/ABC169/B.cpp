#include <bits/stdc++.h>
using namespace std;
unsigned long N = pow(10, 18);
int main(){
  int n;
  unsigned long ans = 1, tmp;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> tmp;
    ans *= tmp;
  }
  cout << ans << endl;
  if(ans > N)cout << -1 << endl;
  else cout << ans << endl;
}
