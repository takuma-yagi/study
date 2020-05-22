#include <bits/stdc++.h>
using namespace std;

char lower(char c){
  if('A' <= c && c <= 'Z') c = c - 'A' + 'a';
  return c;
}

int main(){
  string w,t;
  int flag,count = 0;
  int i;
  cin >> w;
  while(1){
    cin >> t;
    if(t == "END_OF_TEXT") break;
    flag = 1;
    if(w.size() != t.size()) flag = 0;
    else{
      for(i = 0;i < w.size(); i++){
        if(lower(w[i]) != lower(t[i])) flag = 0;
      }
    }
    if(flag) count += 1;
  }
  printf("%d\n", count);
}
