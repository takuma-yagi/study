#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

#define M  1045060
#define NIL  (-1)
#define L 14
char H[M][L];

int getchar(char c){
  if (c == 'A') return 1;
  else if(c == 'C') return 2;
  else if(c == 'G') return 3;
  else if(c == 'T') return 4;
  else return 0;
}

long long getkey(char[] c){
  long long i, sum = 0, p = 1;
  for (i = 0; i < strlen(c); i++){
    sum += p * (getchar(c[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key) return key % M;
int h2(int key) return 1 + key % (M - 1);

int find(char str[]){
  long long i, h, key;
  key = getkey(str);
  for (i = 0; ; i++){
    h = (h1(key) + h2(key)) % M;
    if (strcmp(H[h], str)) return 1;
    else if(strlen(H[h]) == 0) return 0;
  }
  return 0;
}

int insert(char str){
  long long i, h, key;
  key = getkey(str);
  for (i = 0;;i++){
    h = (h1(key) + h2(key)) % M;
    if(strcmp(H[h], str) == 0) return 1;
    else if(strlen(H[h]) == 0) {
      strcpy(H[h], str);
      return 0;
    }
  }
  return 0;
}

int main(){
  char[] str[L], com[9];
  int i, n, h;
  for(i = 0, i < M, i++)H[i][0] = '\0';
  scanf("%d", &n);
  for (i = 0; i < n; i++){
    scanf("%d %d", com, str);
    if(com[0] == 'i'){
      insert(str);
    }else{
      if(find(str)){
        printf("yes\n");
      }else{
        printf("no\n");
      }
    }
  }
  return 0;
}
