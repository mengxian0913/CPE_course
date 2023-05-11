/*********************************************************
# File Name: b964.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 四  5/11 16:50:25 2023
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

int grade[30];

void solve(){
    int n;
    int mn = INF, mx = -INF;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> grade[i];
        if(grade[i] >= 60){
            mn = min(mn, grade[i]);
        }

        if(grade[i] < 60){
            mx = max(mx, grade[i]);
        }
    }

    sort(grade, grade + n);

    for(int i=0;i<n;i++){
        cout << grade[i] << " ";
    }
    cout << "\n";

    if(mx == -INF){
        cout << "best case\n";
    }

    else{
        cout << mx << "\n";
    }


    if(mn == INF){
        cout << "worst case\n";
    }

    else{
        cout << mn << "\n";
    }
    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
