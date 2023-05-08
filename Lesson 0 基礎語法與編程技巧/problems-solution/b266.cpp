/*********************************************************
# File Name: a.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 二  5/ 9 00:22:14 2023
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

int mp[15][15], tmp[15][15], oper[15];
int n, m, q;


void op1(){
    int Lptr = 0, Rptr = n-1;

    while(Lptr <= Rptr){
        for(int k=0;k<m;k++){
            swap(mp[Lptr][k], mp[Rptr][k]);
        }
        Lptr++;
        Rptr--;
    }

    return;
}

void op2(){
    memset(tmp, 0, sizeof(tmp));
    for(int i=m-1, j=0;i>=0;i--, j++){
        for(int k=0;k<n;k++){
            tmp[j][k] = mp[k][i];
        }
    }

    memset(mp, 0, sizeof(mp));
    swap(n, m);
    
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            mp[i][k] = tmp[i][k];
        }
    }

    return;
}



void solve(){
    cin >> n >> m >> q;

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cin >> mp[i][k];
        }
    }

    for(int i=0;i<q; i++){
        cin >> oper[i];
    }

    for(int i=q-1;i>=0;i--){
        if(oper[i] == 1){
            op1();
        }

        else{
            op2();
        }
    }

    cout << n << " " << m << "\n";

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cout << mp[i][k] << " ";
        }
        cout << "\n";
    }

    return;
}

signed main(){
    fastIO
    solve();
    return 0;
}
