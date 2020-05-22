#include <bits/stdc++.h>
using namespace std;

int count = 0;

void insertionsort(vector<int> a, int n, int g){
  int i, j, tmp, current;
  for(i = g; i < n; i++){
    current = a.at(i);
    j = i - g;
    while(j >= 0 && a.at(j) > current){
      a.at(j + g) = a.at(j);
      j = j - g;
      count++;
    }
    a.at(j + g) = current;
  }
}

void shellsort(vector<int> a, int n){
  int m = 0, s = 1, i, k;

  while((n/s) > 0){
    s *= 2;
    m++;
  }

  vector<int> g(20);

  for(i = 0, k = 1;i < m; i++){
    g.at(i) = n / k;
    k *= 2;
  }

  for(i = 0; i < m; i++){
    insertionsort(a, n, g.at(i));
  }

  printf("%d", m);
  for(i = 0; i < m; i++) printf("%d", g.at(i));
  printf("%d", count);
  for(i = 0; i < n; i++) printf("%d", a.at(i));
}

int main(){
  int n, i;
  scanf("%d", &n);
  vector<int> a(n);
  for(i = 0; i < n; i++) scanf("%d", &a.at(i));

  shellsort(a, n);
}
