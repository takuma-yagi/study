#include <bits/stdc++.h>
using namespace std;

string same_val(vector<int> input){
  for (int i = 0; i < input.size() - 1; i++){
    if (input.at(i) == input.at(i + 1)){
      return "YES";
    }
  }
  return "NO";
}

int main(){
  vector<int> lst(5);
  for (int i = 0; i < 5; i++){
    cin >> lst.at(i);
  }
  cout << same_val(lst) << endl;
}
