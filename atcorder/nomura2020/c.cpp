#include<bits/stdc++.h>
using namespace std;
int check(vector<int> a, int n){
  int max = 1;
  for(int i = 0; i < n; i++){
    if(max < a[i]) return 0;
    else{
      max = 2 * (pow(2, i) - a[i]);
    }
  }
  return 1;
}

int main(){
  int n, sum = 0;
  cin >> n;
  vector<int> a(n + 1);
  int fib[n + 1];
  fib[0] = 0;
  fib[1] = 0;
  fib[2] = 1;
  fib[3] = 2;
  for(int i = 4; i < n + 1; i++) fib[i] = fib[i - 1] + fib[i - 2] + 1;
  for(int i = 0; i < n + 1; i++)cin >> a.at(i);

  }else printf("%d", -1);
}
