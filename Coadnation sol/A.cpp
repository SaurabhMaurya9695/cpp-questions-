
#include<bits/stdc++.h>
using namespace std;
#define ll long long



bool isgolden(string sub , int subl)
{
    unordered_map<char,int> mp;
    for(int i =0 ; i<subl ; i++)
    {
        mp[sub[i]]++ ;
    }
    int mpsize = mp.size();
    if(mpsize == 2 )
    {
        for(auto x : mp)
        {
            if(x.second > (subl / 3)) 
            {
                return true;
                break;
            }
        }
    }
    return false;
}

string lcs(string s , string s1, int m , int n )
{
    
    int dp[m+1][n+1];
    int len  = 0; 
    int row , col ;
    for(int i = 0 ; i<=m ;i++)
    {
        for(int j = 0 ; j<= n ; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j] = 0 ;
            }
            else if(s[i-1] == s1[j-1])
            {
                dp[i][j] = dp[i-1] [j-1] +  1;
                if(len < dp[i][j])
                {
                    len = dp[i][j];
                    row = i;
                    col = j;
                }
            }
            else
            {
                dp[i][j]= 0;
            }
        }
    }
    if(len == 0)
    {
        return " ";
    }
    char* resultstr = (char* )malloc((len+1) * sizeof(char));
    while(dp[row][col] != 0)
    {
        resultstr[--len] = s[row-1];
        row--;
        col-- ;
    }
    return resultstr;
    
    
}
int solve(string s)
{
    string s1 ;
    s1 = s;
    reverse(s1.begin() , s1.end());
    int m = s.length();
    int n = s1.length();
    
    string sub = lcs(s,s1 , m , n);
    int subl = sub.length();
    // cout<<isgolden(sub , subl) <<"\n";
    return isgolden(sub , subl);
    
}

int main()
{
    string s ;
    cin>>s;
    transform(s.begin() ,s.end() , s.begin(), :: tolower);
    cout<<solve(s)<<"\n";
    
        
    return 0 ;
    
    
}