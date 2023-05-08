#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(!a && !b){
            break;
        }
        int ans = 0;
        for(int i=a;i<=b;i++){
            int tmp = sqrt(i);
            if(tmp * tmp == i){
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
