#include <bits/stdc++.h>
using namespace std;

struct Node{
  int value;
  int *next;
};

Node *nil;

int main(){
  int n, k, t, i, count = 0;
  scanf("%d %d", &n, &k);
  map<int, int> a;
  for (i = 0; i < n; i++) {
    scanf("%d", &t);
    a[i] = t;
  }

  //一番初め
  int current = a[0];

  while(current == a[0]){
    current = a[current - 1];
    count++;
  }
  printf("%d", count);

}
