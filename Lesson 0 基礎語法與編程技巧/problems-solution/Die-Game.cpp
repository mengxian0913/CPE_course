#include<bits/stdc++.h>
using namespace std;

#define int long long

int die[6] = {1, 6, 3, 4, 5, 2}; // 上、下、西、東、南、北

void reset(){
	die[0] = 1;
	die[1] = 6;
	die[2] = 3;
	die[3] = 4;
	die[4] = 5;
	die[5] = 2;
	return;
}

void north(){
	int tmp = die[0];
	die[0] = die[4];
	die[4] = die[1];
	die[1] = die[5];
	die[5] = tmp;
	return;
}

void south(){
	int tmp = die[0];
	die[0] = die[5];
	die[5] = die[1];
	die[1] = die[4];
	die[4] = tmp;
	return;
}

void east(){
	int tmp = die[0];
	die[0] = die[2];
	die[2] = die[1];
	die[1] = die[3];
	die[3] = tmp;
	return;
}

void west(){
	int tmp = die[0];
	die[0] = die[3];
	die[3] = die[1];
	die[1] = die[2];
	die[2] = tmp;
	return;
}



signed main(){
	int n;
	while(cin >> n){
		reset();
		if(!n) break;
		string ss;
		while(n--){
			cin >> ss;
			if(ss == "north"){
				north();
			}
			
			else if(ss == "south"){
				south();
			}
			
			else if(ss == "west"){
				west();
			}
			
			else{
				east();
			}
		}
		cout << die[0] << "\n";
	}
}
