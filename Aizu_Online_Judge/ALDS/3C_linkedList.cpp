#include <bits/stdc++.h>
#include <list>
using namespace std;

struct Node{
  int key;
  Node *prev, *next;//次の値、前の値のポインタを確保
};

Node *nil;//Node型のポインタ変数を定義

Node* listsearch(int key){
  Node *cur = nil->next;//ポインタ変数からnextを呼び出すからアロー演算子
  while (cur != nil && cur->key != key){
    cur = cur->next;
  }
  return cur;
}

void init(){
  nil = (Node *)
}

int main(){

}
