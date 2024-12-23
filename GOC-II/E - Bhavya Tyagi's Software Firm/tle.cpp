#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[405][5005];

ll help(vector<int>& s, int g, int idx){
    int n = s.size();
    if (g == 0 && idx < n) return 1e15;
    if (idx == n) return 0;

    if (dp[g][idx] != -1) return dp[g][idx];

    ll ans = LLONG_MAX, sm = 0;

    for(int i = idx; i < n; ++i){
        sm += s[i];
        ans = min(ans, sm*(i-idx+1) + help(s, g-1, i+1));
    }

    return dp[g][idx] = ans;
}

void solve(){
    int n,g; cin>>n>>g;
    vector<int> s(n);
    for(int i = 0; i < n; ++i) cin>>s[i];
    memset(dp, -1, sizeof(dp));
    
    ll res = help(s, g, 0);

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