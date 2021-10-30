// #pragma GCC optimize("O3")
// #pragma GCC target("sse4")
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// typedef pair<int, int> pi;
// typedef pair<ll, ll> pl;
// typedef pair<ld, ld> pd;
// typedef vector<int> vi;
// typedef vector<ld> vd;
// typedef vector<ll> vl;
// typedef vector<pi> vpi;
// typedef vector<pl> vpl;
// #define FOR(i, a, b) for (int i = a; i < (b); i++)
// #define F0R(i, a) for (int i = 0; i < (a); i++)
// // #define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
// // #define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
// #define trav(a, x) for (auto &a : x)
// #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
// #define sz(x) (int)(x).size()
// #define mp make_pair
// #define pb push_back
// #define fst first
// #define sec second
// #define lb lower_bound
// #define ub upper_bound
// #define all(x) x.begin(), x.end()
// #define ins insert
// const int MOD = 1000000007;
// const int MX = 100001;
// long long sum = 0 ;
// void init()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.in", "r", stdin);
//     freopen("output.out", "w", stdout);
// #endif
// }
// void fastIO()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
// }
// long long int solve(ll n)
// {
//     while(n > 0)
//     {
//         ll r = n % 10 ;
//         sum += r ;
//         n = n / 10;
//     }
//     return sum;
// }
    


    
// int main()
// {
//     fastIO();
//     init();
//     int t ;
//     cin >> t;
//     ll cnt  = 0;
//     while (t--)
//     {
//         ll a , b ;
//         cin>>a >>b ;
         
//         for(ll i = a ; i <= b  ; i++)
//         {
//             if( solve(i) % 3 == 0 )
//             {
//                 cnt++;
//             }

//         }

//     cout<< cnt << '\n';
//     }
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll t;cin>>t;

    while(t--){
        ll A,B;
        cin>>A>>B;

        ll M=3;
        if (A % M == 0)cout<<(B / M) - (A / M) + 1<<endl;
        else cout<<(B / M) - (A / M)<<endl;
    }
    return 0;
}