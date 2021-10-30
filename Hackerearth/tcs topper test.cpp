
#include <bits/stdc++.h>
using namespace std;

const int M = 1001;
const int MOD = 998244353;

int dp[M][M];


int solve(int idx, int diff, int N, int M, int K)
{
	
	if (idx > N) {
		if (diff == K)
			return 1;
		return 0;
	}

	if (dp[idx][ diff] != -1)
		return dp[idx][ diff];

	
	int ans = solve(idx + 1, diff, N, M, K);

	ans += (M - 1) * solve(idx + 1, diff + 1, N, M, K);

	return dp[idx][ diff] = ans % MOD;
}


int main()
{
	int N , M , K ;
    cin>>N>>M>>K;
	memset(dp, -1, sizeof(dp));

	cout << (M * solve(2, 0, N, M, K)) << endl;

	return 0;
}
