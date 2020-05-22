#include <bits/stdc++.h>
using namespace std;

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
  for (int i = 0; i < 9; i++){
    for (int j = 0; j < 9; j++){
      if ((i + 1) * (j + 1) != A.at(i).at(j)){
        A.at(i).at(j) = (i + 1) * (j + 1);
        wrong_count ++;
      }else{
        correct_count ++;
      }
    }
  }
}

// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  cout << correct_count << endl;
  cout << wrong_count << endl;
}

#include <bits/stdc++.h>
using namespace std;

void saiten(vector<vector<int> > &a, int &correct_count, int &wrong_count){
  int i, j;
  for(i = 0; i < 9; i++){
    for(j = 0; j < 9; j++){
      if(a.at(i).at(j) != (i + 1) * (j + 1)){
        a.at(i).at(j) != (i + 1) * (j + 1);
        wrong_count ++;
      }else correct_count++;
    }
  }
}

int main(){
  int correct = 0, wrong = 0, i, j;
  vector<vector<int>> a(9, vector<int>(9));
  for (i = 0; i < 9; i++){
    for (j = 0;j < 9; j++){
      cin >> a.at(i).at(j);
    }
  }

  saiten(a, correct, wrong);

  cout << correct << endl;
  cout << wrong <<endl;
}
