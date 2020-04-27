#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, a;
  cin >> N >> a;
  for (int i = 0; i < N; i++){
    string s;
    int b;
    cin >> s >> b;
    if (s == "+"){
      a += b;
    }
    else if (s == "-"){
      a -= b;
    }
    else if (s == "*"){
      a *= b;
    }
    else if (s == "/" && b != 0){
      a /= b;
    }
    else{
      cout << "error" << endl;
      break;
    }
    cout << i + 1 << ":" << a << endl;
  }
}
