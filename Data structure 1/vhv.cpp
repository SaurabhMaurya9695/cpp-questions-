#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>> s; // takes string
    int n;
    cin>> n;
    int sum =0;
    vector<char> arr(n);
    for(int i = 0 ; i< n ; i++)
    {
        cin>> arr[i] ;
    }
    vector<char, int >  v;
    for(int i = 0 ; i< s.size()  ; i++)
    {
        v[s[i] - 'a']++;
    }
    for(int  i=  0 ; i< n; i++)
    {
        if(arr[i] == v[s[i] -'a'])
        {
            sum += arr[i] * v[s[i] - 'a']; 

        }
    }


}