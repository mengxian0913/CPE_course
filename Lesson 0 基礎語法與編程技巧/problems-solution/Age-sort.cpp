#include<bits/stdc++.h>
using namespace std;

#define int long long

int arr[2000010];

void solve(int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return;
}

signed main()
{
    int n;
    while(cin >> n){
        if(!n) break;
        solve(n);
    }

    return 0;
}
