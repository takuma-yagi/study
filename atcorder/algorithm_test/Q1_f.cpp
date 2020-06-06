#include<bits/stdc++.h>
using namespace std;
int check_same(string s, string t){
  int flag = 0;
  for(int i = 0; i < 3; i++){
    if(s[i] == t[i]){
      flag = 1;
    }
  }
  return flag;
}

int lower(char c1){
  char c1_lower;
  c1_lower = c1 - 'A' + 'a';
  return c1_lower;
}

int check_lower(string s, string t){
  int flag = 0;
  for(int i = 0; i < 3; i++){
    if(lower(s[i]) == t[i] || s[i] == lower(t[i])){
      flag = 1;
    }
  }
  return flag;
}

int main(){
  string s,t;
  cin >> s >> t;
  int flag = 0;
  if(check_same(s, t)) flag = 1;
  if(check_lower(s, t)) flag = 2;
  if(flag == 0) printf("different");
  else if(flag == 1) printf("same");
  else printf("case-insensitive");
}
