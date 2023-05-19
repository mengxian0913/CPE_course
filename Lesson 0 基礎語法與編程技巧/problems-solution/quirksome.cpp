/*********************************************************
# File Name: a.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 五  5/12 16:36:35 2023
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


string getans(int n1, int n2, int n){

    string s1 = to_string(n1);
    string s2 = to_string(n2);

    while(s1.size() < n){
        s1 = "0" + s1;
    }
    
    while(s2.size() < n){
        s2 = "0" + s2;
    }
    return s1 + s2;
}


void solve(int n){
    n /= 2;
    int mx = 1;
    
    for(int i=0;i<n;i++){
        mx *= 10;
    }

    for(int i=0; i< mx; i++){
        for(int k=0;k<mx;k++){
            if((i + k) * (i + k) == i * mx + k){
                cout << getans(i, k, n) << "\n";
            }
        }
    }

    return;
}

signed main(){
    fastIO
    int n;
    while(cin >> n)
        solve(n);
    return 0;
}
