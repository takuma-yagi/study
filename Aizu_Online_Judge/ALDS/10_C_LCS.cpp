#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    string s1, s2;
    for(int i = 0; i < q; i++){
        cin >> s1 >> s2;
        int l1 = s1.size() + 1, l2 = s2.size() + 1, maxl = 0;
        int dp[1000][1000];
        for(int j = 0; j < l1; j++) dp[j][0] = 0;
        for(int k = 0; k < l2; k++) dp[0][k] = 0;
        for(int j = 1; j < l1; j++){
            for(int k = 1; k < l2; k++){
                if(s1[j - 1] == s2[k - 1]) dp[j][k] = dp[j - 1][k - 1] + 1;
                else dp[j][k] = max(dp[j - 1][k], dp[j][k - 1]);
                maxl = max(maxl, dp[j][k]);
            }
        }
        cout << maxl << endl;
    }
}
