#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, flag = 0;
  vector<char> ans;
  scanf("%d", &n);
  //出てきた文字の数をハッシュテーブルに記録
  int hash['z'-'a' + 1];
  for(int i = 0; i < 26; i++) hash[i] = 0;
  //2回以上出てくる必要のある文字数
  int count = 0, necessary = n / 2;

  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    for(int j = 0; j < n; j++){
      char tmp;
      tmp = s[j];
      hash[tmp - 'a']++;
    }
  }

  for(int i = 0; i < 26; i++){
    if(hash[i] > 1){
      count++;
      ans.push_back(i + 'a');
      if(count == necessary) {
        flag = 1;
        break;
      }
    }
  }

  if(flag){
    if(n % 2 == 0){
      for(int i = 0; i < necessary; i++) cout << ans[i];
      for(int i = necessary; i > 0; i++) cout << ans[i - 1] << endl;
    }else{
      char c = 'a';
      for(int i = 0; i < 26; i++){
        if(hash[i] == 1) c += i;break;
      }
      for(int i = 0; i < necessary; i++) cout << ans[i];
      cout << c;
      for(int i = necessary; i > 0; i++) cout << ans[i - 1] << endl;
    }
  }else printf("%d", -1);
}
