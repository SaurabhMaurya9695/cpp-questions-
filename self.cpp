#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define endl  "\n"
#define sort(a) sort(a.begin() , a.end())
#define rev(a)  reverse(a.begin() , a.end())
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define PI 3.14159265358979323846 
#define M 1e9 + 7
#define readvector(v , n) for(ll i= 0 ; i < n ; i++){ cin>> v[i] ;}


ll gcd(ll a, ll b) // TC = O(log n)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
void solve(){
    ll n,k;
    cin>>n>>k;
    k++;
    vector<int>a(n);
    for(ll i=0;i<n;i++) cin>>a[i]; // input
    ll ans=0;
    ll p[12];
    p[0]=1;
    for(ll i=1;i<=10;i++) p[i]=p[i-1]*10LL; // prefix array 10 ,100, 10000, 100000..
    for(ll i=1;i<n;i++){
        ll diff = a[i]-a[i-1]; // number of notes required .
        ll notes = p[diff]-1LL; // takes prefix of that diff - 1 ;
        if(k>=notes){
            k-=notes;
            ans+=(notes*p[a[i-1]]);
        }
        else{
            ans+=(k*p[a[i-1]]);
            k=0;
        }
    }
    if(k) ans+=(k*p[a[n-1]]);
    cout<<ans<<"\n";
}

    



int main()
{
    fast;
    ll t;
    cin>> t;
    while(t--)
    {
        solve() ;

    }
}

