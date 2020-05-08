#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i;
  scanf("%d", n);
  int a[n];
  for(i = 0; i < n; i++){
    scanf("%d", a[i]);
  }
  for (i = 0; i < n - 1; i++){
    v = a[i];
    j = i - 1;
    while(j >= 0 && a[j]){
      a[j + 1] = a[j];
      j--;
      a[j + 1] == v;
    }

  }
}
