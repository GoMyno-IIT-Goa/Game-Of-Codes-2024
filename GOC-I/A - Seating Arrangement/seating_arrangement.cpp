#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int t; cin>>t;
    while(t--){

        int n, m, x;
        cin >> n >> m >> x;

        int max_students = ceil((n * m) / 2.0); 

        if(x <= max_students){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl; 
        }
    }
}
