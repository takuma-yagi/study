#include <bits/stdc++.h>
using namespace std;

int main(){
  string a;
  int count = 0;
  cin >> a;
  for (int i = 0; i < 3; i++){
    if (a[i] == '1'){
      count ++;
    }
  }
  cout << count << endl;
}
