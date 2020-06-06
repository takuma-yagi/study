#include<bits/stdc++.h>
using namespace std;
long long N = pow(10, 9);
int check(long long cur){
  int flag = 0;
  if(cur > N) flag = 1;
  return flag;
}
int main(){
  long long a, r, n, flag = 1;
  scanf("%lld %lld %lld", &a, &r, &n);
  for(int i = 0; i < n - 1; i++){
    a *= r;
	if(check(a)){
      flag = 0;
      printf("large");
      break;
    }
  }
  if(flag) printf("%lld", a);
}
