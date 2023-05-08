/*********************************************************
# File Name: Letters.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 一  5/ 8 15:38:52 2023
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

int val_str[30];

bool cmp(char a, char b){
    if(val_str[a-'A'] != val_str[b-'A']){
        return val_str[a-'A'] < val_str[b-'A'];
    }
    
    return false;
}

void solve(){
    string s1, s2;
    int val = 0, q;
    cin >> s1;
    
    for(int i=0;i<s1.size(); i++){
         val_str[s1[i]-'A'] = i;
    }

    cin >> s2;

    sort(s2.begin(), s2.end(), cmp);

    cin >> q;
    while(q--){
        int n;
        cin >> n;
        cout << s2[n-1] << "\n";
    }

    return;
}   

signed main(){
    fastIO
    solve();
    return 0;
}
