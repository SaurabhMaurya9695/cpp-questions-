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


// find which no is not repeated  -> [ 2, 2, 1]
// int n = nums.size() , ans = nums[0];
//         for(int i = 1 ; i < n ; i++){
//             ans = ans ^ nums[i] ;
//         }
//         return ans ;

int main()
{
    
    ll po[61];
    po[0]=1;
    
    for(int i=1; i<=60; i++)
    {
        po[i]=(po[i-1]*2); // 1 2 4 8 32 64 ..................
    }
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        vector<int > v(n);
        int cnt1 = 0 ;
        int  cnt2 = 0;
        for(int i =0 ; i< n; i++)
        {
            cin>> v[i] ;
        }
        for(int i =0 ; i< n; i++)
        {
           if(v[i] == 1)
           {
               cnt1++;
           }
           else if(v[i] == 0)
           {
               cnt2++;
           }
        }

        cout<< (cnt1 * po[cnt2] ) << endl;



    }




}