#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    while(t--){

        int n, m;
        cin >> n >> m;

        vector<ll> nums(n), stockPrice(m);

        for (int i = 0; i < n; i++){
            cin >> nums[i]; 
        }

        for (int i = 0; i < m; i++){
            cin >> stockPrice[i]; 
        }

        ll maxsum = INT_MIN;
        ll currsum = 0; 

        for(auto it : nums){

            if(currsum < 0) currsum = it; 
            else currsum += it; 

            maxsum = max(maxsum, currsum); 
        }

        sort(begin(stockPrice), end(stockPrice));

        ll sum = 0;
        int ans = 0;

        for(auto it : stockPrice){
            sum += it; 

            if(sum <= maxsum){
                ans++; 
            }
            else
                break; 
        }

        cout << ans << endl; 
    }
}