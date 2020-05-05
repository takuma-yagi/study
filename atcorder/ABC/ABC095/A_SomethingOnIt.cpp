#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int count = 700;
  for (int i = 0; i < 3; i++){
    if (s[i] == 'o'){
      count += 100;
    }
  }
  cout << count << endl;
}
