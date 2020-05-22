#include <bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, days = 0, sum = 0;
  scanf("%d %d %d", &a, &b, &c);
  while(1){
    if(sum >= c) break;
    days += 1;
    sum += a;
    if(days % 7 == 0) sum += b;
  }
  printf("%d", days);
}
