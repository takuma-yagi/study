#include <bits/stdc++.h>
using namespace std;

int main (){
  int64_t x, price = 100, count = 0;
  cin >> x;
  while (price < x){
    price *= 1.01;
    count += 1;
  }
  cout << count << endl;
}
