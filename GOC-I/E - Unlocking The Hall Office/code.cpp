#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n; cin>>n;
    vector<vector<int>> adj(n);
    for(int i = 0; i < n-1; ++i){
        int x; cin>>x;
        while(x--){
            int y; cin>>y;
            adj[i].push_back(--y);
        }
        sort(adj[i].begin(), adj[i].end());
    }

    queue<int> que;
    que.push(0);
    vector<bool> vis(n, false);
    vis[0] = true;
    vector<int> p(n, -1);

    while(!que.empty()){
        int tp = que.front();
        que.pop();
        for(auto& u : adj[tp]){
            if (!vis[u]){
                vis[u] = true;
                que.push(u);
                p[u] = tp;
            }
        }
    }

    if (p[n-1] == -1){
        cout<<"-1"<<endl;
        return;
    }

    vector<int> path;
    for(int v = n-1; v != -1; v = p[v]){
        path.push_back(v);
    }

    reverse(path.begin(), path.end());
    cout<<path.size()<<endl;
    for(auto& v :path) cout<<v+1<<" ";
    cout<<endl;
    
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