#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<int>input;

signed main(){
	cin.tie(0); ios_base::sync_with_stdio(false);
	
	int r = 3,n;
	
	while(cin >> n){
		int k = 0;
		
		for(int i=0;i<n;i++){
			cin >> k;
			
			input.push_back(k);
		}
		
		while(input.size() != 0){
			
			for(int i=0;i<input.size();i++){
				cout << input[i] << " ";
			}
			
			cout << endl;
			
			input.erase(input.begin());
			
			reverse(input.begin(),input.end());

		}
		
		input.clear();
		
		cout << endl;
		
	}
	
	return 0;
	
}
