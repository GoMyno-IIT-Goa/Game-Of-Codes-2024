#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){

        int n;
        cin >> n;

        string a, s;
        cin >> s;
        cin >> a;

        vector<char> vec;

        for (int i = 0; i < n; i++){
            if(a[i]=='1'){
                vec.push_back(s[i]); 
            }
        }

        sort(begin(vec), end(vec), greater<char>());

        int j = 0; 

        for (int i = 0; i < n; i++){
            if(a[i]=='1'){
                s[i] = vec[j];
                j++; 
            }
        }

        cout << s << endl; 
    }
}