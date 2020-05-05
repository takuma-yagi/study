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


#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int n;
int a[100000 + 1];

int binarysearch(key){
  int left = 0;
  int right = n;
  int mid;
  while(left < right){
    if (a[key] == mid) return 1;
    if (a[key] > mid) right = mid;
    else if(a[key] < mid) left = mid + 1;
  }
  return 0;
}

int main(){
  int n, q, i, sum = 0;
  scanf("&d", &n);
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  scanf("&d", &q);
  for (i = 0; i < q; i++){
    scanf("&d", &key);
    if(binarysearch(key)) sum++;
  }
  printf("%d", sum);
  return 0;
}
