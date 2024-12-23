#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[405][5005];
ll pref[5005];
ll INF = 1e16;
int s[5005];

ll C(int a, int b){
    ll res = (b-a+1) * (pref[b]-pref[a] + s[a]);
    return res;
}

void dnc(int g, int l, int r, int optl, int optr){
    if (l > r) return;

    int mid = (l + r) / 2;
    pair<ll,int> best = {INF, -1};

    for(int i = optl; i <= min(mid, optr); ++i){
        best = min(best, {C(i, mid) + dp[g-1][i-1],i});
    }

    dp[g][mid] = best.first;
    int opt = best.second;

    dnc(g, l, mid-1, optl, opt);
    dnc(g, mid+1, r, opt, optr);
}

void solve(){
    int n,g; cin>>n>>g;
    for(int i = 0; i < n; ++i) cin>>s[i];

    pref[0] = s[0];
    for(int i = 1; i < n; ++i) pref[i] = s[i] + pref[i-1];

    for(int i = 0; i < n; ++i){
        dp[1][i] = C(0,i);
    }

    for(int i = 2; i <= g; ++i){
        dnc(i, 0, n-1, 0, n-1);
    }

    cout<<dp[g][n-1]<<endl;

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