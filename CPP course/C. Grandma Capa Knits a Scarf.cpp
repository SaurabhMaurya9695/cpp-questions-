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
void solve()
{



}

int main()
{
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        string str;
        cin>>str;
        set<char> s;
        for(int i = 0 ; i< n; i++)
        {
            s.insert(str[i]);       /// stores char in set
        }
        vector<ll>ans(26,LONG_LONG_MAX);
        for(auto &a : s)// iterate over the set;
        {
            int start =0 ;
            int end = n - 1 ;
            int c =0 ;
            while(start < end)
            {
                if(str[start] ==  str[end])
                {
                    start++;
                    end--;
                }
                else{
                    if(str[start] == 'a')
                    {
                        start++;
                        c++;
                    }
                    else if(str[end] == 'a')
                    {
                        end--;
                        c++;
                    }
                    else{
                        c--;
                        break;
                    }

                }
            }
            if(c != - 1)
            {
                ans[a- 'a'] = c; // store that element with freq;
            }

        }
        sort(ans);
        if(ans[0]==LONG_LONG_MAX)cout<<"-1\n";
    else cout<<ans[0]<<"\n";

    }




}