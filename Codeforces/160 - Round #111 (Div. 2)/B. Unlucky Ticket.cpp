/***  KNOWLEDGE IS POWER  ***/

#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
#define pb push_back
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define inf LLONG_MAX
#define N 100100
using namespace std ;
void solve()
{
	int n ;
	cin >> n ;
	string s ;
	cin >> s ;
	vector<int> a , b ;
	for(int i = 0 ; i < 2*n ; i++)
	{
		if(i < n)
		{
			a.pb(s[i] - '0') ;
		}
		else
		{
			b.pb(s[i] - '0') ;
		}
	}
	sort(all(a)) ;
	sort(all(b)) ;
	bool flag = true ;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] <= b[i])
		{
			flag = false ;
			break ;
		}
	}
	if(flag)
	{
		cout << "YES" ;
	}
	else
	{
		for(int i = 0 ; i < n ; i++)
		{
			if(a[i] >= b[i])
			{
				flag = true ;
				break ;
			}
		}
		if(flag)
		{
			cout << "NO" ;
		}
		else
		{
			cout << "YES" ;
		}
	}
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1 ;
    // cin >> testcases ;
    while( testcases -- )
    {
    	solve( ) ;
        cout << "\n" ;
    }	
    return 0 ;
}    
