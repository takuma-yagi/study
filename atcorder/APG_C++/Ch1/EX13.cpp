#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++){
    cin >> vec.at(i);
  }

  int sum = 0;
  for (int i = 0; i < vec.size(); i++){
    sum += vec.at(i);
  }

  int mean = sum / n;

  for (int i = 0; i < vec.size(); i++){
    if (vec.at(i) < mean){
      cout << mean - vec.at(i) << endl;
    }
    else {
      cout << vec.at(i) - mean << endl;
    }
  }

}
