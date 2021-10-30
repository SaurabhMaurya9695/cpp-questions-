#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define endl "\n"
#define sort(a) sort(a.begin() , a.end())
#define rev(a)  reverse(a.begin() , a.end())
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define PI 3.14159265358979323846 
#define M 1e9 + 7
// #define readvector(v , n) for(int i= 0 ; i < n ; i++){ cin>> v[i] ;}
// find which no is not repeated  -> [ 2, 2, 1]
// int n = nums.size() , ans = nums[0];
//         for(int i = 1 ; i < n ; i++){
//             ans = ans ^ nums[i] ;
//         }
//         return ans ;



void solve()
{
    // int n, v; 
    // cin>> n>> v;  // 3 1
    // vector<int> arr(n);
    // for(int i =0 ; i< n; i++)
    // {
    //      arr[i] = i; //1 2 3 
    // }
    // int maxi = 0 ;
    // for(int  i= 1 ; i< n; i++)
    // {
    //      maxi = maxi  + arr[i] ;     // 1 ,3 , 6
    // }
    // cout<< maxi << " " << abs(maxi - v)<< endl;

    ll n , v;
    cin>> n>> v;
    ll maxi = 0 , mini =0 ;
    maxi = ( ( n -1) * n )/2 ;
    if(v==1)
    {
         mini=  maxi;
    }
    else{
        if(v>=  n - 1)
        {
            mini = n - 1 ;
        }
        else{
            mini = v + ((n-v)* (n-v+1)) / 2- 1 ;
        }
    }
    cout<< maxi <<" " << mini<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}