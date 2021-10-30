#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define sort(a) sort(a.begin() , a.end())
#define rev(a)  reverse(a.begin() , a.end())
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define PI 3.14159265358979323846 
#define M 1e9 + 7



ll findcount(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}


void solve()
{
    ll n;
    cin>> n;
    int arr[n];
    for(int i =0 ; i< n; i++)
    {
        cin>> arr[i];
    }
    for(int i =0 ; i< n; i++)
    {
        if ((findcount(arr[i]) %2 == 0 )  )
        {
            cout<< "NO" << endl;
        }
        else{
            cout<< "YES"<< endl;
        }
    }
    


}

int main()
{
    fast;
    // ll t;
    // cin>> t;
    solve();




}