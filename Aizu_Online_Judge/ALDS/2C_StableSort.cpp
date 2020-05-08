#include <bits/stdc++.h>
using namespace std;
struct card{char mark; int number;};

vector<card> bubblesort(vector<card> a, int n){
  int i, j;
  card tmp;
  for(i = 0; i < n; i++){
    for(j = n - 1 ; j > i; j--){
      if(a.at(j).number < a.at(j - 1).number){
        tmp = a.at(j);
        a.at(j) = a.at(j - 1);
        a.at(j - 1) = tmp;
      }
    }
  }
  for(i = 0;i < n - 1; i++) cout << a.at(i).mark << a.at(i).number << " ";
  cout << a.at(n - 1).mark << a.at(n - 1).number << endl;
  return a;
}

vector<card> selectionSort(vector<card> a, int n){
  int i, minj, j;
  card tmp;
  for(i = 0; i < n; i++){
    minj = i;
    for(j = i; j < n; j++){
      if(a.at(minj).number > a.at(j).number) minj = j;
    }
    if(i != minj){
      tmp = a.at(minj);
      a.at(minj) = a.at(i);
      a.at(i) = tmp;
    }
  }
  for(i = 0;i < n - 1; i++) cout << a.at(i).mark << a.at(i).number << " ";
  cout << a.at(n - 1).mark << a.at(n - 1).number << endl;
  return a;
}

int main(){
  int n, i, p;
  char tp[3];
  scanf("%d", &n);
  vector<card> bubble(n), select(n);
  for(i = 0; i < n; i++){
    scanf("%s", tp);
    bubble.at(i).mark = tp[0];
    bubble.at(i).number = tp[1] - '0';
  }
  select = bubble;


  bubble = bubblesort(bubble, n);
  printf("Stable\n");
  select = selectionSort(select, n);
  for (p = 0; p < n; p++){
    if(bubble.at(p).mark != select.at(p).mark || bubble.at(p).number != select.at(p).number)
      break;
  }
  if(n == p) printf("Stable\n");
  else printf("Not stable\n");
}
