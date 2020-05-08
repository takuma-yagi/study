#include <bits/stdc++.h>
#include <list>
using namespace std;

int main(){
  int n;
  cin >> n;
  list<int> v;
  char com[20];
  int val;

  for (int i = 0; i < n; i++){
    scanf("%S", &com);
    // 以下入力コマンドごとの動作
    if (c == 'insert'){
      scanf("%d", val);
      v.push_front(val);
    }else if(c == 'delete'){
      scanf("%d", val);
      for (list<int>::iterator it = v.begin(); it != v.end(); it++){
        if (*it == val){
          v.erace(it);
          break;
        }
      }
    }
    }else if(c == 'deleteFirst'){
      v.pop_front();
    }else{
      v.pop_back();
    }
  }
}

int main(){
  int n;
  cin >> n;
  list<int> v;
  char com[20];
  int val;

  for (int i = 0; i < n; i++){
    scanf("%S", &com);
    if(c == 'insert'){
      scanf("%d", val);
      v.push_front(val);
    }else if (c == 'delete'){
      scanf("%d", val);
      for (list<int>:: iterator it = v.begin(); it != v.end(); it++){
        if(*it == val){
          v.erase(it);
          break;
        }
      }
    }
  }
}
