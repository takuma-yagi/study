#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int n;
int a[100000 + 1];

int binarysearch(int key){
  int left = 0;
  int right = n;
  int mid;

  while (left < right){
    mid = (left + right) / 2;
    if (a[mid] == key) return 1;
    if(a[mid] < key) left = mid + 1;
    else if(a[mid] > key) right = mid;
  }
  return 0;
}


int main(){
  int i,key , q, sum = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  scanf("%d", &q);
  for(i = 0; i < q; i++){
    scanf("%d", &key);
    if(binarysearch(key)) sum ++;
  }
  printf("%d\n", sum);

  return 0;
}

//簡単な書き方
//algorithmをインクルードする

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
 vector<int> a = {1,2,3,4,6,7,9,13,17};
 sort(a.begin(), a.end());
 for (int i = 0; i < 20; i++){
   if (binary_search(a.begin(), a.end(), i)){
     cout << i << ": " << "found" << endl;
   }else{
     cout << i << ": " << "not found" << endl;
   }
 }
 return 0;
}
