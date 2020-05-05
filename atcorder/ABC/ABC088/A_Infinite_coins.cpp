#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a;
  cin >> n >> a;
  int count = n % 500;
  if (count <= a){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
