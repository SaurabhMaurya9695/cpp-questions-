#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
	if(b == 0)
		return a;
	else
		return gcd(b,a%b);
}

ll computeLCM(ll arr[] , ll n)
{
	ll ans = arr[0];
	for(ll i = 1 ; i< n; i++)
	{
		ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
	}
		return ans;
}

int  main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
            cin>>arr[i];
		ll ans = computeLCM(arr,n);
		cout << ans << "\n";
	}

	
	return 0;
}