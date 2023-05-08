#include<iostream>
using namespace std;

void solve(){
    int n, b1 = 0, b2 = 0;
    cin >> n;

    int bits = n;

    while(bits){
        b1 += (bits%2);
        bits /=2;
    }

    bits = n;

    while(bits){
        int bit = bits % 10;
        bits /= 10;

        while(bit){
            b2 += (bit%2);
            bit /= 2;
        }
    }

    cout << b1 << " " << b2 << "\n";

    return;
} 

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
