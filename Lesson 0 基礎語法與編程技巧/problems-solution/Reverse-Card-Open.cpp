i#include<bits/stdc++.h>
using namespace std;

#define int long long
#define io ios_base::sync_with_stdio(false)


string ans[10];

signed main(){
    cin.tie(0); io;
    
    for(int i=0;i<10;i++){
        ans[i] = "EMPTY";
    }
        
    int n,index=0;
    cin >> n;
    
    while(n--){    
        string input;
        int id=0;
        cin >> input >> id;
        
        ans[id-1] = input;
        
    }
    
    for(int i=0;i<10;i++){
        cout << ans[i] << "\n";
    }
    
    return 0;
       
}
