// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define ff first
// #define ss second
// #define endl "\n"
// #define sort(a) sort(a.begin() , a.end())
// #define rev(a)  reverse(a.begin() , a.end())
// #define fast                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define pb push_back
// #define PI 3.14159265358979323846 
// #define M 1e9 + 7
// #define readvector(v , n) for(ll i= 0 ; i < n ; i++){ cin>> v[i] ;}
// // find which no is not repeated  -> [ 2, 2, 1]
// // int n = nums.size() , ans = nums[0];
// //         for(int i = 1 ; i < n ; i++){
// //             ans = ans ^ nums[i] ;
// //         }
// //         return ans ;



// void solve()
// {
//     int a;
//     cin>> a;
//     ll  n= pow(2 , a);
//     int cnt = 1;
//     cout<< "1 " ;
//     for(int i = 1 ; i< a; i++)
//     {
//         cout<< i<<" " ;
//         cnt += i;
//     }
//     cout<< (n- cnt) << endl;


// }

// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }

//     return 0;
// }












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
#define readvector(v , n) for(ll i= 0 ; i < n ; i++){ cin>> v[i] ;}
// find which no is not repeated  -> [ 2, 2, 1]
// int n = nums.size() , ans = nums[0];
//         for(int i = 1 ; i < n ; i++){
//             ans = ans ^ nums[i] ;
//         }
//         return ans ;

bool isPrime(int x)
{
    for(int i = 2; i <= x/2; i++)
    {
        if(x%i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    
    cin >> n;
    ll sum = pow(2 , n); 

    
    vector<int> v;
    v.push_back(1);
    
    for(int i = 2; i <= sum; i++)
    {
        if(isPrime(i))
        {
            v.push_back(i);
        }
    }

    
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl; // 1 2 3 5 7
    // }
    vector<int> ans;

    // ll sum = pow(2 , n);     // 8 > 1, 7 >2 ,5 >3 , 2< 3
    for(int i = 0; i <= n ; i++)
    {
        if(sum >= v[i])
        {
            ans.push_back(v[i]);           //1 2 3 5 7   16>1 ,15>2 ,13>3 ,10>5 ,5>7 .
            sum = sum - v[i];
        }

        if(sum < v[i])
        {
            ans.push_back(sum);
            
        }
    }
    sort( ans); 
    for(int i =0 ; i< ans.size() ; i++)
    {
        cout<< ans[i] <<" ";
    }
    cout<< endl;


}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}