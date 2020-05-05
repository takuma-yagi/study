#include <bits/stdc++.h>
using namespace std;

int tmp, mod;

int eucrid(int a, int b){
  mod = a % b;
  if (mod != 0){
    a = b;
    b = mod;
    return eucrid(a, b);
  }else return b;
}

int main(){
  int a, b, gcd;
  scanf("%d %d", &a, &b);
  if (a < b){
    tmp = a;
    a = b;
    b = tmp;
  }
  gcd = eucrid(a, b);
  printf("%d", gcd);
}
