#include <bits/stdc++.h>
using namespace std;

int main(){
  int p, price;
  cin >> p;

  if (p == 2){
    string text;
    cin >> text;
    cout << text << "!" << endl;
  }


  int n;
  cin >> price >> n;
  cout << price * n << endl;
}
