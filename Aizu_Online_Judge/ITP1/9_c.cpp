#include <bits/stdc++.h>
using namespace std;

int check(string s1, string s2){
  int n = min(s1.size(), s2.size()), i;
  for(i = 0; i < n; i++){
    if(s1[i] > s2[i]) return 1;
    else if(s1[i] < s2[i]) return 0;
  }
}

int main(){
  int a = 0, b = 0, n, i;
  string s1, s2;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    cin >> s1 >> s2;
    if(s1 == s2){
      a++;
      b++;
    }else{
      if(check(s1,s2)) a += 3;
      else b += 3;
    }
  }
  printf("%d %d\n", a, b);
}
