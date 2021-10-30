#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
      cin>>n;
      ll ans=1;
      ll mod=1e9+7;
      for(int i=2*n;i>=3;i--){
        ans=(ans*i)%mod;;
      }
      ans=ans%mod;
      cout<<ans<<"\n";
}