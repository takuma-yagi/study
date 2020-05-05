#include <iostream>
using namespace std;

int main(){
  int i, n, c1, c2, price;
  scanf("%d %d %d", &n, &c1, &c2);
  int profit = 0, count = 0;

  for (i = 0; i < n - 1 ; i++){
    scanf("%d", &price);
    if(price <= c1) {
      profit -= price;
      count += 1;
    }else if(c2 <= price){
      profit += price * count;
      count = 0;
    }
  }
  scanf("%d", &price);
  profit += price * count;
  printf("%d", profit);

}
