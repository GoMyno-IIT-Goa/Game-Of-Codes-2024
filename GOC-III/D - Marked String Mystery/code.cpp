#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dp[200005];
const int M = 1e9+7;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for(int i = 0; i < n; ++i){
        for(int j = i-1;;--j){
            dp[i+2] = (dp[i+2] + dp[j+1]) % M;
            if (j == -1 || s[i] == s[j]) break;
        }
    }

    int res = 0;
    for(int i = 2; i < n+2; ++i) res = (res + dp[i]) % M;

    cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; t = 1;
    while (t--){
        solve();
    }

    return 0;
}