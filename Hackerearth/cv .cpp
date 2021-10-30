// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
vector<int> v;

void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			v.push_back(p);
    for(int i = 0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" "<<endl;
    }        
}

// Driver Code
int main()
{
	int n = 45;
	cout <<  n << endl;
	SieveOfEratosthenes(n);
	return 0;
}
