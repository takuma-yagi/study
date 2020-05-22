#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    bitset<32> bit(n);
    cout << bit << endl;
    cout << ~bit << endl;
    cout << (bit << 1) << endl;
    cout << (bit >> 1) << endl;
}
