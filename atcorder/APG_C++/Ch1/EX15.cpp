#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores){
  int ans = 0;
  for (int i = 0; i < scores.size(); i ++){
    ans += scores.at(i);
  }
  return ans;
}

void output(int a, int b, int c){
  cout << a * b * c << endl;
}

vector<int> input(int n){
  vector<int> ans(n);
  for (int i = 0; i < n; i++){
    cin >> ans.at(i);
  }
  return ans;
}

int main(){
  int n;
  cin >> n;
  vector<int> a_scores = input(n);
  vector<int> b_scores = input(n);
  vector<int> c_scores = input(n);
  int a = sum(a_scores);
  int b = sum(b_scores);
  int c = sum(c_scores);
  output(a, b, c)
}
