#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    int i = 0, j = n-1;
    bool res = true;
    while(i < j){
        int dist = abs(s[i]-s[j]);
        res &= (dist == 0 || dist == 2);
        i++;
        j--;
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