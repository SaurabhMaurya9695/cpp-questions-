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
// find which no is not repeated  -> [ 2, 2, 1]
// int n = nums.size() , ans = nums[0];
//         for(int i = 1 ; i < n ; i++){
//             ans = ans ^ nums[i] ;
//         }
//         return ans ;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l,j,k,check;
    string s;
    vector<int> v,v1;
    cin>>t;
    while(t--)
    {
        check=1;
        v.clear();
        v1.clear();
        cin>>s;
        l=s.length();
        set <char>st ( begin( s ) , end( s ) );   // insert char in s starting to end;
        if(l==1) // if one char is present a ->true
        {
            if(s.at(0)=='a')
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
        else if(l==2)    /// if two char present ab pr ba ->true 
        {
            if(s.at(0)=='a'&&s.at(1)=='b')
            cout<<"YES\n";
            else if(s.at(0)=='b'&&s.at(1)=='a')
            cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(st.size()<l) // if the size of set is < 1 ;
        {cout<<"NO\n";}
        else
        {
            size_t found = s.find('a'); // cal size of found ;
            if (found != string::npos) // find the char from starting to end ;
            {
                for(int i=0;i<found;i++)
                {
                    v.insert(v.begin(),(int)(s.at(i)-'a')); // if char found then insert i v;
                }
                for(int i=found+1;i<l;i++)
                {
                    v1.push_back((int)(s.at(i)-'a')); // same goes for this vector
                }
                // for(int i=0;i<v.size();i++)
                // cout<<v[i]<<" "; //  1 2   5 7 8
                // cout<<"\n";
                // for(int i=0;i<v1.size();i++)
                // cout<<v1[i]<<" ";   // 3  4 6
                // cout<<"\n";
                j=0;k=0;
                for(int i=1;i<l;i++)
                {
                    if(v.empty()==false&&j<v.size()&&v[j]==i)
                    j++;
                    else if(v1.empty()==false&&k<v1.size()&&v1[k]==i)
                    k++;
                    else
                    {
                        check=0;
                        break;
                    }
                }
                if(check==1)
                cout<<"YES\n";
                else
                cout<<"NO\n";
            }
            else
            cout<<"NO\n";
        }
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define mod 1000000007

// int fun(int mid, int index, vector<int> vec, int n){
//     int num=0, m;
//     if(mid%(index-1))
//     m=mid/(index-1);
//     else
//     m=mid/(index-1)-1;
//     for(int i=0; i<m; i++){
//         num+=vec[mid+i];
//     }
//     for(int i=m+1; i<=n; i++){
//         num+=vec[index*i];
//     }
//     return num;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(NULL);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         cin>>n>>k;
//         vector<int>vec;
//         vec.push_back(0);
//         for(int i=0; i<n*n; i++){
//             int num;
//             cin>>num;
//             vec.push_back(num);
//         }
//         sort(vec.begin(), vec.end());
//         int ind;
//         if(n%2)
//         ind=(n+1)/2;
//         else
//         ind=(n+1)/2 +1;
//         int ans=0;
//         int sum=0;
//         for(int i=0; i<n; i++){
//             sum+=vec[ind*(i+1)];
//         }
//         if(sum>k){
//             cout<<"-1"<<"\n";
//         }
//         else if(n==1)
//         cout<<vec[1]<<"\n";
//         else{
//             int lo=ind, hi=(ind-1)*n +2, mid;
//             while(hi>lo){
//                 mid=(lo+hi)/2;
//                 if(fun(mid, ind, vec, n)<=k){
//                     ans=mid;
//                     lo=mid+1;
//                 }
//                 else{
//                     hi=mid;
//                 }
//             }
//             cout<<vec[ans]<<"\n";
//         }
//     }
//     return 0;
// }
