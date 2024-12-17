#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k; cin>>n>>k;
    vector<ll> a(n);
    for(int i = 0; i < n; ++i) cin>>a[i];

    sort(a.begin(), a.end());
        
    ll s = 1, e = 1e14, res = LLONG_MAX;
    
    auto check = [&](ll mid){
        ll trips = 0;
        for(auto& elem : a){
            trips += mid / elem;
        }
        return trips >= k;
    };
    
    while(s <= e){
        ll mid = (s + e) / 2;
        if (check(mid)){
            res = mid;
            e = mid - 1;
        }else s = mid + 1;
    }
    
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