/*********************************************************
# File Name: Kth.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 四  5/11 16:46:32 2023
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

int age[3000];

void solve(){
   int n, ind = 0;
   while(cin >> n){
       if(n == -1){
           break;
       }

       age[ind++] = n;
   }

   sort(age, age + ind, greater<int>());

   int k;
   cin >> k;
   cout << age[k-1]; 
}

signed main(){
    fastIO
    solve();
    return 0;
}
