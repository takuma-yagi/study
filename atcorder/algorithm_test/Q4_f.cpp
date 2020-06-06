#include <bits/stdc++.h>
using namespace std;
string sub(string s, int i){
  string s_1;
  int begin = 4 * i - 3;
  s_1 = s.substr(begin,3);
  return s_1;
}

int main(){
  int n, begin;
  scanf("%d", &n);
  vector <int> ans;
  string s1,s2,s3,s4,s5;
  cin >> s1 >> s2 >> s3 >> s4 >> s5;
  for(int i = 1; i < n + 1; i++){
    if(sub(s1, i) == ".#.") ans.push_back(1);
    else if(sub(s1, i) == "#.#") ans.push_back(4);
    else{
      if(sub(s2, i) == "#.#"){
        if(sub(s3, i) == "#.#" && sub(s4, i) == "#.#") ans.push_back(0);
        else if(sub(s3, i) == "###" && sub(s4, i) == "#.#") ans.push_back(8);
        else ans.push_back(9);
      }else if(sub(s2, i) == "..#"){
        if(sub(s3, i) == "###" && sub(s4, i) == "#..") ans.push_back(2);
        else if(sub(s3, i) == "###" && sub(s4, i) == "..#") ans.push_back(3);
        else ans.push_back(7);
      }else{
        if(sub(s4, i) == "..#") ans.push_back(5);
        else ans.push_back(6);
      }
    }
  }
  for(int i = 0; i < n; i++) printf("%d", ans[i]);
}
