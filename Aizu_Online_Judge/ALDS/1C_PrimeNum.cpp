
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
  int i, n, j, x, lim, count = 0;
  scanf("%d", &n);

  for (i = 0; i < n; i++){
    scanf("%d", &x);
    lim = sqrt(x);
    for (j = 2; j <= lim; j++){
      if(x % j == 0){
        count++;
        break;
      }
    }
  }
  printf("%d\n", n - count);
}
