#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,sum;
  cin >> n >> sum;
  vector<int> apple(n);
  vector<int> pine(n);

  for (int i = 0; i < n; i++){
    cin >> apple.at(i);
  }
  for (int i = 0; i < n; i++){
    cin >> pine.at(i);
  }

  int counter = 0;
  for (int i = 0; i < apple.size(); i++){
    for (int j = 0; j < pine.size(); j++){
      int price_sum = apple.at(i) + pine.at(j);
      if (price_sum == sum){
        counter += 1;
      }
    }
  }
  cout << counter << endl;
}
