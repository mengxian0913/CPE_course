/*********************************************************
# File Name: Cola.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 一  5/ 8 12:57:15 2023
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

void solve(int n){
    int total = n, now = n;
    while(now){
        int tmp = now / 3;
        total += tmp;
        now = now%3 + tmp;
    }

    cout << total + (now == 2 ? 1 : 0) << "\n";
    return;
}

signed main(){
    fastIO
    int n;
    while(cin >> n){
        solve(n);
    }
    return 0;
}
