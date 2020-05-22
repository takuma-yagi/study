#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, s_copy;
  int n, i, a;
  while(1){
    cin >> s;
    if(s == "-") break;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
      scanf("%d", &a);
      s_copy = s.substr(0, a);
      s.erase(0, a);
      s.insert(s.size(), s_copy);
    }
    cout << s << endl;
  }
}
