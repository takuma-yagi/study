#include <bits/stdc++.h>
using namespace std;

#define MAX 100005
#define NIL -1

struct Node {int p, left, right};

Node T[MAX];
int n, D[MAX];

void print(int u){
  cout << "node" << u << ":";
  cout << "parent = " << T[u].p << ",";
  cout << "depth = " << D[u] << ",";

  if (T[u].p
}
