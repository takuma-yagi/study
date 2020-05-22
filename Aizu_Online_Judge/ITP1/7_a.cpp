#include <bits/stdc++.h>
using namespace std;

int main(){
  int m, f, r, i;
  for(i = 0; ;i++){
    scanf("%d %d %d", &m, &f, &r);
    if(m == -1 && f == -1 && r == -1) break;
    else if(m == -1 || f == -1) printf("F\n");
    else if(m + f >= 80) printf("A\n");
    else if(80 > m + f && m + f >= 65)printf("B\n");
    else if(65 > m + f && m + f >= 50)printf("C\n");
    else if(50 > m + f && m + f >= 30){
      if(r >= 50)printf("C\n");
      else printf("D\n");
    }
    else if(m + f < 30) printf("F\n");
  }
}
