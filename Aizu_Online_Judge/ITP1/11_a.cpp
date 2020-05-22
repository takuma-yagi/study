#include <bits/stdc++.h>
using namespace std;
int tmp;

vector<int> rotate(vector<int> num, int a, int b, int c, int d){
    tmp = num[a];
    num[a] = num[b];
    num[b] = num[c];
    num[c] = num[d];
    num[d] = tmp;
    return num;
}

int main(){
  vector<int> num(6);
  string q;
  int i;
  for(i = 0; i < 6; i++)scanf("%d", &num[i]);
  cin >> q;
  for(i = 0; i < q.size(); i++){
    if(q[i] == 'N') num = rotate(num, 0, 1, 5, 4);
    else if(q[i] == 'S') num = rotate(num, 0, 4, 5, 1);
    else if(q[i] == 'E')num = rotate(num, 0, 3, 5, 2);
    else num = rotate(num, 0, 2, 5, 3);
  }
  printf("%d", num[0]);
}
