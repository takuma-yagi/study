#include <bits/stdc++.h>
using namespace std;
int main(){
  int h1, h2, m1, m2, k;
  scanf("%d %d %d %d %d", &h1, &m1, &h2, &m2, &k);
  int awake = 60 * (h2 - h1) + (m2 - m1);
  printf("%d", awake - k);
}
