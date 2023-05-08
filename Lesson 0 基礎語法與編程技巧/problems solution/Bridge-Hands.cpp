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

int pos[200], order[200]; 
string pos_str = "SWNE", card_str = "CDSH23456789TJQKA";
string cards[5][20];
int ind[5];


void preset(){

    for(int i=0;i<4;i++){
        pos[pos_str[i]] = i;
    }

    for(int i=0;i<card_str.size(); i++){
        order[card_str[i]] = i;
    }

    return;
}


bool cmp(string s1, string s2){
    if(s1[0] != s2[0]){
        return order[s1[0]] < order[s2[0]];
    }

    else if(s1[1] != s2[1])
        return order[s1[1]] < order[s2[1]];

    else return false;
}


void solve(char c){

    int player = pos[c];

    string a, b;
    cin >> a >> b;
    a += b;

    for(int i=0;i<a.size();i+=2){
        player = (player+1) % 4;
        string now = a.substr(i, 2);
        cards[player][ind[player]] = now;
        ind[player]++;
    }


    for(int i=0;i<4;i++){
        sort(cards[i], cards[i] + 13, cmp);
    }
    
    for(int i=0;i<4;i++){
        cout << pos_str[i] << ": ";
        for(int k=0;k<13;k++){
            cout << cards[i][k] << " ";
        }
        cout << "\n";
    }

    return;

}

signed main(){
    fastIO
    preset();
    char c;
    while(cin >> c){
        if(c == '#') break;
        memset(ind, 0, sizeof(ind));
        solve(c);
    }

    return 0;
}
