/*********************************************************
# File Name: a.cpp
# Author: Vincent Yang
# Mail: mengxian0913@gmail.com
# Created Time: 五  5/19 13:30:05 2023
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

int mv_x[4] = {0, 0, -1, 1}; // 上下左右
int mv_y[4] = {1, -1, 0, 0}; // 0 1 2 3

bool vis[55][55];
map<char, int> mp;

void preset(){
    memset(vis, false, sizeof(vis));
    mp['N'] = 0;
    mp['S'] = 1;
    mp['W'] = 2;
    mp['E'] = 3;
    return;
}


void solve(){
    int max_x, max_y;
    cin >> max_x >> max_y;
    
    int x, y;
    char d;

    while(cin >> x >> y >> d){
        bool lost = false;
        int move = mp[d];
        string ss;
        cin >> ss;

        for(int i=0;i<ss.size(); i++){

            if(ss[i] == 'F'){
                move = mp[d];
                int tmpx = x + mv_x[move];
                int tmpy = y + mv_y[move];

                if(tmpx >= 0 && tmpx <= max_x && tmpy >= 0 && tmpy <= max_y){
                    x = tmpx;
                    y = tmpy;
                }

                else{
                    if(vis[x][y] == true){
                        continue;
                    }

                    else{
                        vis[x][y] = true;
                        lost = true;
                        cout << x << " " << y << " " << d << " LOST\n";  
                        break;
                    }
                }
            }

            else if(ss[i] == 'R'){
                if(d == 'N') d = 'E';
                else if(d == 'E') d = 'S';
                else if(d == 'S') d = 'W';
                else d = 'N';
            }

            else{
                if(d == 'N') d = 'W';
                else if(d == 'W') d = 'S';
                else if(d == 'S') d = 'E';
                else d = 'N';
            }
        }

        if(!lost){  // lost == false
            cout << x << " " << y << " " << d << '\n';
        }
    }
    
    return;
}

signed main(){
    fastIO
    preset();
    solve();
    return 0;
}
