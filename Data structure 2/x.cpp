#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void solve(int n)
{
    if((n == 1 ) || (n==2)) cout<< 1 << endl;
    if(n==3) cout<< 2 << endl;

}

int main() {

	long long t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
    }

}
