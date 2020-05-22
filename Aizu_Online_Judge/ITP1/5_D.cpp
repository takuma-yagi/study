#include <bits/stdc++.h>
using namespace std;


int main(){
  int n, i = 1, x;
  scanf("%d", &n);
  while(i <= n){
    x = i;
    if(x % 3 == 0){
      cout << " " << x;
    }else{
      while(x){
        if(x % 10 == 3){
          cout << " " << x;
          break;
        }else{
          x /= 10;
        }
      }
    }
    i++;
  }
  cout << endl;
}
