#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int longest_common_subarray(vector<int> &arr, vector<int> &brr){

    int n = arr.size(), m = brr.size();

    vector<int> dp(m + 1, 0);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = m - 1; j >= 0; j--)
        {

            if (arr[i] == brr[j])
            {
                dp[j + 1] = 1 + dp[j];
            }
            else
            {
                dp[j + 1] = 0;
            }

            ans = max(ans, dp[j + 1]);
        }
    }

    return ans;
}
int main(){
    int t; cin>>t;
    while(t--){

        int n, m;
        cin >> n >> m;

        vector<int> goldi(n), soldi(m);

        for (int i = 0; i < n; i++){
            cin >> goldi[i]; 
        }
        for (int i = 0; i < m; i++){
            cin >> soldi[i]; 
        }

        reverse(soldi.begin(), soldi.end());

        int ans = longest_common_subarray(goldi, soldi);

        cout << ans * 2 << endl; 
    }
}
