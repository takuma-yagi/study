#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int[] lst, int n){
  int count = 0;
  for (int i = lst.size() - 1; i > 0; i--){
    for (int j = 0; j < i - 1; j++){
      if (lst[j + 1] < lst[j]){
        int tmp = lst[j];
        lst[j] = lst[j + 1];
        lst[j + 1] = tmp;
        count++;
      }
    }
  }
  cout << lst << endl;
  cout << count << endl;
  return;
}

int main(){
  int n;
  cin >> n;
  int[n] num_list;
  for (int i = 0; i < n; i++){
    cin >> num_list[i];
  }

}
