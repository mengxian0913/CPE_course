#pragma GCC optimize("O3")
#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int n;
 
void solve()
{
	cin >> n;
	
	if(n == 1)
	{
		cout << 1 << "\n";
	}
	
	else if(n <= 3)
	{
		cout << "NO SOLUTION\n";
	}
	
	else
	{
		for(int i=2;i<=n;i+=2)
		{
			if(i > n) break;
		
			cout << i << " ";
		}
		
		for(int i=1;i<=n;i+=2)
		{
			if(i > n) break;
			
			cout << i << " ";
		}
	}
	return;
}
 
 
signed main()
{
	cin.tie(0); ios_base::sync_with_stdio(false);
	
	solve();
}
