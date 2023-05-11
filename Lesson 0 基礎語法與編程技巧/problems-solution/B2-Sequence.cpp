/*********************************************************
# File Name: B2-Sequence.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 四  5/11 16:32:10 2023
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

int arr[110], record[20100];

string ans[2] = {"It is a B2-Sequence.", "It is not a B2-Sequence."};

void solve(int n){
    memset(record, 0, sizeof(record));

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        for(int k=i; k<n; k++){
            int now = arr[i] + arr[k];
            if(record[now] > 0){
                cout << ans[1] << "\n";
                return;
            }

            record[now]++;
        }
    }

    cout << ans[0] << "\n";
    return;
}

signed main(){
    fastIO
    int t, Case = 1;
    while(cin >> t){
        cout << "Case #" << Case++ << ": ";
        solve(t);
        cout << "\n";
    }
    return 0;
}
