#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> find_LIS(vector<int> &arr){
    int n = arr.size();
    if (n == 0)
        return {};

    vector<int> dp(n, 1); 
    vector<int> temp;     

    for (int i = 0; i < n; ++i)
    {
        int pos = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();

        if (pos == temp.size()){
            temp.push_back(arr[i]);
        }
        else{
            temp[pos] = arr[i];
        }

        dp[i] = pos + 1;
    }

    return dp;
}
int main(){
    int t; cin>>t;
    while(t--){

        int n, k; 
        cin>>n>>k;

        vector<int> piles(n);

        for (int i = 0; i < n; i++){
            cin >> piles[i]; 
        }

        vector<int> lis = find_LIS(piles);

        int ans = 0;

        for (int i = 0; i < n; i++){
            ans = max(ans, lis[i] + min(k, n - i - 1)); 
        }

        cout << ans << endl; 
    }
}