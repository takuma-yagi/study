#include <bits/stdc++.h>
using namespace std;

int main(){
  map<int, int> list;
  int i, n, m;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &m);
    if(list.count(m)) list[m] += 1;
    else list[m] = 1;
  }
  for(auto p:list){
    max = p.first;
    if 
  }
}
