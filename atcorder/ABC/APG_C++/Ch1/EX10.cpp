#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  int i = 0;
  cin >> a >> b;
  cout << "A:";
  while (i < a){
    cout << "]";
    i++;
  }
  cout << endl;

  int j = 0;
  cout << "B:";
  while(j < b){
    cout << "]";
    j++;
  }
  cout << endl;
}
