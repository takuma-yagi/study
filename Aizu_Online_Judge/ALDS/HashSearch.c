#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

#define M 1046456
#define NIL (-1)
#define L 14

char H[M][L];

int getNum(char c){
  if (c == 'A') return 1;
  else if (c == 'C') return 2;
  else if (c == 'G') return 3;
  else if (c == 'T') return 4;
  else return 0;
}

long long getkey(char str[]){
  long long sum = 0, p = 1,i;
  for (i = 0; i < strlen(str); i++){
    sum += p * (getNum(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key % M;}
int h2(int key){ return 1 + (key % (M - 1));}

int find(char str[]){
  long long key, i ,h;
  key = getkey(str);
  for (i = 0; ; i++){
    h = (h1(key) + i * h2(key)) % M;
    if (strcmp(H[h], str) == 0) return 1;
    else if(strcmp(H(h), str) == 1)return 0;
  }
  return 0;
}

int insert(char str[]){
  long long key, i, h;
  key = getkey(str);
  for (i = 0; ; i++){
    h = (hi(key) + i * h2(key)) % M;
    if (strcmp(H[h], str) == 0) return 1;
    else if (strlen(H(h)) == 0){
      strcpy(H(h), str);
      return 0;
    }
  }
  return 0;
}

int main(){
  int i, n, h;
  char str[L], com[9];
  for (i = 0; i < n; i++){
    scanf("%s %s", com, str);
    if (com[0] == 'i'){
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
