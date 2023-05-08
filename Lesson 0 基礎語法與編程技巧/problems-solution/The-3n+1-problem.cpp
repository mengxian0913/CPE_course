#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int a, b;
    while(cin >> a >> b){
        cout << a << " " << b << " ";
        if(a > b){
            swap(a, b);
        }
        int ans = -1;
        for(int i=a;i<=b;i++){
            int tmp = i, cnt = 1;
            while(tmp != 1){
                if(tmp % 2 != 0){
                    tmp = 3 * tmp  + 1;
                }
                else{
                    tmp /= 2;
                }

                cnt++;
            }


            ans = max(ans, cnt);
            
        }

        cout << ans << "\n";
    }
    return 0;
}
