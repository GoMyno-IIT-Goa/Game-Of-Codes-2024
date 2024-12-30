#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int freq[26] = {0};

    for(auto& elem : s) freq[elem-'a']++;

    int res = 0;
    for(int i = 0; i < 26; ++i) res = max(res, freq[i]);

    cout<<res<<endl;
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