#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n; cin>>n;
    vector<vector<int>> a(n, vector<int>(5));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 5; ++j) cin>>a[i][j];
    }

    bool res = false;
    for(int i = 0; i < 4; ++i){
        for(int j = i+1; j < 5; ++j){
            int d1 = 0, d2 = 0, d = 0;
            for(int k = 0; k < n; ++k){
                d1 += a[k][i];
                d2 += a[k][j];
                d += !(a[k][i] + a[k][j]);
            }
           
           res |= (d1 >= n/2 && d2 >= n/2 && d == 0);
        }
    }

    cout<<(res ? "YES" : "NO")<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while (t--){
        solve();
    }

    return 0;
}