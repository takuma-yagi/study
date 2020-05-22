#include <bits/stdc++.h>
using namespace std;

string print(string s, int begin, int end){
  string output = s.substr(begin, end - begin + 1);
  return output;
}

string replace(string s, int begin, int end, string s2){
  string output = s.replace(begin, end - begin + 1, s2);
  return output;
}

string reverse(string s, int begin, int end){
  int n;
  if((end - begin) % 2 == 0) n = (end - begin) / 2;
  else n = (end - begin + 1) / 2;
  for(int i = 0; i < n; i++) swap(s[i], s[end - i]);
  return s;
}

void swap(char c1, char c2){
  char tmp;
  tmp = c1;
  c1 = c2;
  c2 = tmp;
}

int main(){
  string s, q, s2;
  int i, n, begin, end;
  cin >> s >> n;
  for(i = 0; i< n; i++){
    cin >> q;
    scanf("%d %d", &begin, &end);
    if(q == "replace"){
      cin >> s2;
      s = replace(s, begin, end, s2);
    }
    else if(q == "reverse"){
      s = reverse(s, begin, end);
    }
    else{
        cout << print(s, begin, end) << endl;
    }
  }
}
