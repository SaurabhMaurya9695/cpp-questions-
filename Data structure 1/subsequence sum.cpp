#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pb push_back
const long double Pi = 3.141592653;
const ll mod=1e9+7;
long long INF =1000000000000000000;
struct mycmp
{
    bool operator()(pair<int,int>a,pair<int,int>b)const
    {
        return (a.first<b.first) || (a.first==b.first && a.second>b.second);
    }
};
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<ll > arr(n);
        vector<ll > inc , dec;
        for(ll i = 0 ; i< n; i++)
        {
            cin>> arr[i];
        }
        for(ll i = 0 ; i< arr.size() ; i++)
        {
            for(ll j = i ;j < arr.size() ; j++)
            {
                if(arr[i] > arr[j])
                {
                    

                }

            }
        }


    }
}