/*********************************************************
# File Name: Distinct-Numbers_set.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 一  5/22 13:51:21 2023
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

set<int> ms;
// unordered_set<int> ms;

void solve(){
    int n, val;
    cin >> n;
    while(n--){
        cin >> val;
        ms.insert(val);
    }

    cout << ms.size() << "\n";
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
