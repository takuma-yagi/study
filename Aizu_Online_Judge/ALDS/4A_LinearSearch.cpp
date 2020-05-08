#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n ; i++){
    cin >> s.at(i);
  }
  cin >> m;
  int v, count = 0;
  for (int i = 0; i < m; i++){
    cin >> v;
    for (int j = 0; j < n; j++){
      if (v == s.at(j)){
        count ++;
      }
    }
  }
  cout << count << endl;
}


/*
違う！*/


#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int search(int A[], int n, int key){
  int i = 0;
  A[n] = key;
  while (A[i] != key){
    return i != n;
  }
}

int main(){
  int i, n, A[10000 + 1], q, key, sum = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++){
    scanf("&d", &A[i]);
  }
  scanf("%d", &q);
  for (i = 0; i < q; i++){
    scanf("%d", key);
    if (search(A, n, key)) sum++;
  }
  printf("&d", sum);

  return 0;
}
