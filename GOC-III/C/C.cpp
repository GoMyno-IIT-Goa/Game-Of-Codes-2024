#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int longest_common_subarray(vector<int> &nums1, vector<int> &nums2){

    int n = nums1.size(), m = nums2.size();
    int dp[n + 1][m + 1];

    // dp[i][j] denotes the length of longest common subarray ending at ith index in nums1 and jth index in nums2. 

    memset(dp, 0, sizeof(dp));

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // if nums1[curr] == nums2[curr], then we add 1 to the longest common subarray ending at (i-1)th index in nums1 and (j-1)th index in nums2
            if (nums1[i - 1] == nums2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                // if both numbers are not equal, no common subarray exists ending at ith index of nums1 and jth index of nums2
                dp[i][j] = 0;
            ans = max(ans, dp[i][j]); // maximise the length of subarray
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

        // since, we want total length, i.e., length of palindrome, we have to double the length of longest common subarray 
        cout << ans * 2 << endl; 
    }
}
