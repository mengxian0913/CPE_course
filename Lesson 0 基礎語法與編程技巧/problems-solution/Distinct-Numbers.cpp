/*********************************************************
# File Name: Distinct-Numbers.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 六  5/20 22:14:58 2023
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

map<int, bool> mp;

void solve(){
   int n, val;
   cin >> n;
   while(n--){
       cin >> val;
       mp[val] = 1;
   }

   cout << mp.size() << "\n";
   return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
