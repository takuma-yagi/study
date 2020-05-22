#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, i;
  scanf("%d", &n);
  list<int> a;
  list<int>::iterator it, l;
  for(i = 0; i < n; i++){
    int value;
    string query;
    cin >> query;
    if(query == "insert"){
      scanf("%d", &value);
      a.push_front(value);
    }else if(query == "delete"){
      scanf("%d", &value);
      for(it = a.begin();it != a.end();){
        if(*it == value){
          a.erase(it);
          break;
        }
        else it++;
      }
    }else if(query == "deleteFirst"){
      a.pop_front();
    }else{
      a.pop_back();
    }
  }
  it = a.begin();
  for(it,l = --a.end(); it!=l;++it){
    cout << *it << " ";
  }
  cout << *a.end() << endl;
}
