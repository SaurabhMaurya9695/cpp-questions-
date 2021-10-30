#include<bits/stdc++.h>
using namespace std;
#define ll long long 


bool isprime(int n)
{
    if(n==1) return false;
    else{
        for(int i = 2 ; (i*i) <= n ; i++) // we should run a loop <= n ; 
            if(n%i == 0) return false;
    }
           
     return true;
}


void solve(string s) //abcdef
{
   int even = 0 , odd =0;
   for(int i = 0 ; i<s.size() ; i++)
   {
       if(i%2 == 0)
       {
           even += int(s[i]);
       }
       else
       {
           odd+= int(s[i]);
       }
   }
   int res = abs(even - odd);
   if(isprime(res) == 1 )
   {
       cout<< "Prime String "<< endl;
   }
   else{
       cout<< "Causal String" << endl;
   }
}

int main()
{
  ll t;
  cin>> t;
  while(t--)
  {
      string s;
      cin>> s;
      solve(s);
  }
}


