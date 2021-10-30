#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define trav(a, x) for (auto &a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fst first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
const int MOD = 1000000007;
const int MX = 100001;
void init()
{
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
}
void fastIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void solve()
{
    int n;
    cin >> n;
    if((n * (n + 1) / 2) % 2)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<int> a, b;
    int sum = (n * (n + 1) / 4);
    FOR(i, 1, n / 4 + 1)
    {
        a.pb(i);
        a.pb(n + 1 - i);
    }
    int x = n / 4 + 1;
    for(int i=0;i<n/2;i++)
    {
        b.pb(x);
        x++;
    }
    sort(all(a));
    trav(e, a)
        cout << e << ' ';
    cout << '\n';
    trav(e, b)
        cout << e << ' ';
}
int main()
{
    fastIO();
    init();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}