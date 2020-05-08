#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> lst, int n){
  int i, j, tmp, count = 0;
  for (i = n; i > 0; i--){
    for (j = 0; j < i - 1; j++){
      if (lst.at(j + 1) < lst.at(j)){
        tmp = lst[j];
        lst[j] = lst[j + 1];
        lst[j + 1] = tmp;
        count++;
      }
    }
  }
  for(i = 0; i < n - 1 ;i++) printf("%d %s", lst.at(i), " ");
  printf("%d\n", lst.at(n - 1));
  cout << count << endl;
  return;
}

int main(){
  int n;
  cin >> n;
  vector<int> num_list(n);
  for (int i = 0; i < n; i++){
    cin >> num_list.at(i);
  }
  bubble_sort(num_list, n);
}
