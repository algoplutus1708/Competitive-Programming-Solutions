/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100000
using namespace std ;
void solve( )
{
	int n ;
	cin >> n ;
	int x = 2 ;
	while(x < n)
	{
		x *= 4 ;
	}
	if(x == n)
	{
		cout << "Bob" ;
		return ;
	}
	if(n&1)
	{
		cout << "Bob" ;
	}
	else
	{
		cout << "Alice" ;
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
