#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int q; cin>>q;
    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> que;

    while(q--){
        int c; cin>>c;
        if (c == 1){
            int x; cin>>x;
            que.push(x);
        }else if (c == 2){
            if (!pq.empty()){
                cout<<pq.top()<<endl;
                pq.pop();
            }else{
                cout<<que.front()<<endl;
                que.pop();
            }
        }else{
            while(!que.empty()){
                pq.push(que.front());
                que.pop();
            }
        }
    }
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