/*********************************************************
# File Name: a.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 日  5/ 7 11:10:55 2023
*********************************************************/
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second
#define fastIO cin.tie(nullptr)->sync_with_stdio(false);
#define INF 0x7FFFFFFF
#define pb push_back
#define all(aa) aa.begin(),aa.end()
#define MOD 1e9+7

string mp[210];
int m, n, q;

bool check_ret(int r, int c, int l){
    char start = mp[r][c];

    for(int i=r; i<=r+l-1; i++){
        if(i >= m) return 0;

        for(int k=c;k<=c+l-1; k++){
            if(k >= n) return 0;

            if(mp[i][k] != start){
                return 0;
            }
        }
    }

    return 1;
}


int get_max_val(int r, int c){

    for(int i=101; i >= 1; i-=2){
        int adj = i/2;
        if(r - adj < 0 || c - adj < 0){
            continue;
        }
        
        if(check_ret(r-adj, c-adj, i) == true){
            return i;
        }
    }

    return 1;
}

void solve(){
    cin >> m >> n >> q;
    cout << m << " " << n << " " << q << "\n";
    
    for(int i=0;i<m;i++){
        cin >> mp[i];
    }
    
    int r, c;

    while(q--){
        cin >> r >> c;
        int ans = get_max_val(r, c);
        cout << ans << "\n";
    }
    return;
}

signed main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
