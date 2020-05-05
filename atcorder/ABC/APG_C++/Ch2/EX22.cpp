#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int ,int> > v(n);
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    v.at(i) = make_pair(a, b);
  }

  for (int i = 0; i < n; i++){
    int minj = i;
    for (int j = i + 1;j < n; j++){
      if (v.at(minj).second > v.at(j).second){
        minj = j;
      }
    pair<int, int> tmp = v.at(i);
    v.at(i) = v.at(minj);
    v.at(minj) = tmp;
    }
    cout << v.at(i).first << " " << v.at(i).second << endl;
  }
}

//バグが出る、、、、

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<pair<int ,int> > v(n);
  for (int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    v.at(i) = make_pair(b, a);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++){
    int b, a;
    tie(b, a) =v.at(i);
    cout << a << " " << b << endl;
  }
}
