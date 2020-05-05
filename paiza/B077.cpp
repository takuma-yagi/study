#include <iostream>
using namespace std;

int sum = 0;



int main(){
  int n, m, i, j, t_val;
  scanf("%d %d", &n, &m);
  vector <int> t(n);
  int
  for (i = 0; i < n; i++){
    scanf("%d", &t_val);
    t.at(i) = make_pair(i, t_val);
  }

  for (i = 0; i < m; i++){
    sort(t.begin(), t.end());
    v = min(t);
    t -= v;
    
  }


}
