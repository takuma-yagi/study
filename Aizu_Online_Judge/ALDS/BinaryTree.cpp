#include <bits/stdc++.h>
using namespace std;

#define MAX 1000005
#define NIL -1

struct Node{int parent, left, right; };

Node Tree[MAX];
int n, D[MAX];

void print(int u){
  int i, c;
  cout << "Node" << u << ":";
  cout << "parent = " << Tree[u].parent << ",";
  cout << "depth = " << D[u] << ",";

  if (Tree[u].parent == NIL) cout << "root, ";
  else if(Tree[u].left = NIL) cout << "leaf, ";
  else cout << "internal node";

  cout << "[";
  for (i = 0, c = Tree[u].left; c != NIL; i++, c = Tree[c].right){
    if(i) cout << ", ";
    cout << c;
  }
  cout << "]" << endl;
}

int rec(int u, int p){
  D[u] = p;
  if (Tree[u].right != NIL) rec(Tree[u].right, p);
  if (Tree[u].left != NIL) rec(Tree[u].left, p + 1);
}



int main(){
  int i, j, d, v, c, l, r;
  cin >> n;
  for (i = 0; i < n; i++)T[i].parent = T[i].left = T[i].right = NIL;
  for (i = 0; i < n; i++){
    cin >> v >> d;
    for (j = 0; j < d; j++){
      cin >> c;
      if (j == 0) T[v].left = c;
      l = c;
      T[c].parent = v;
    }
  }
  for (i = 0; i < n; i++){
    if(T[i].parent == NIL) r = i;
  }
  rec(r, 0);

  for(i = 0; i < n; i++) print(i);
  return 0;
}
