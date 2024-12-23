#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin>>t;
    while(t--){

        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++){
            cin >> arr[i]; 
        }

        // find first max for each element using stack

        vector<int> fmax(n, 0);

        stack<int> st;

        st.push(0);

        for (int i = 1; i < n; i++){
            

            while(!st.empty() and arr[st.top()] <= arr[i]){
                fmax[st.top()] = i;
                st.pop(); 
            }

            st.push(i); 
        }

        while(!st.empty()){
            fmax[st.top()] = st.top();
            st.pop(); 
        }

        // now find max gold you can take starting from each index
        ll maxGold = 0; 

        for (int i = 0; i < n; i++){
            ll mgold = 0;

            int k1 = k;
            int curr = i; 

            while(k1--){
                mgold += arr[curr];
                
                if(fmax[curr]==curr)
                    break;

                curr = fmax[curr]; 
            }

            maxGold = max(maxGold, mgold); 
        }

        cout << maxGold << endl; 
    }
}